#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main(){

srand(time(NULL));

string playerName;
int hp = 100;
int coins = 0;

cout << "\n";
    cout << "   whats your username?\n";
	cout << "   - ";
cin >> playerName;
system("cls");
    cout << "   welcome, " << playerName << "! Lets begin.\n";
int enemyHP = 50;

bool gameRunning = true;

while (gameRunning) {
	cout << "   ------------MENU------------\n";
	cout << "   1 Attack\n";
	cout << "   2 Heal\n";
	cout << "   3 show status\n";
	cout << "   4 leave game\n";
	cout << "   your choice: ";
	int choice;
	cin >> choice;
	
	switch (choice) {

	case 1: {
		int playerAttack = rand() % 11 + 5;
		cout << "   you are attacking, you did  " << playerAttack << "  damage!\n";
		Sleep(2500);
		enemyHP -= playerAttack;
		
		if (enemyHP > 0) {
			int enemyAttack = rand() % 10 + 1;
		cout << "   the enemy attacks, he did  " << enemyAttack << "  damage!\n";
			Sleep(2500);
			hp -= enemyAttack;
			system("cls");



		}
	break;
	}
	case 2: {
		cout << "   you are healing! +10hp\n";
		Sleep(2500);
		hp += 10;
		if (hp > 100) hp = 100;
		system("cls");

		break;
	}


	case 3:{
		system("cls");
		Sleep(2500);
		cout << "   ---STATUS---\n";
		cout <<"   Player: " << playerName << "\n";
		cout << "   HP: " << hp << "\n";
		cout << "   Coins: " << coins << "\n";
		cout << "   Enemy HP: " << enemyHP << "\n";
		Sleep(2500);
		system("cls");
		break;

	}

	case 4: {
		cout << "\n";
		cout << "   game closing.\n";
		Sleep(2500);
		Beep(800, 900);
		gameRunning = false;
		break;




	}


	default :
		cout << "   invalid input!\n";
		Sleep(2000);
		

	}

	if (enemyHP <= 0) {
		system("cls");
		cout << "   you defeated the enemy!\n";
		Sleep(2500);
		int loot = rand() % 10 + 1;
		coins += loot;
		cout << "   you get " << loot << " Coins!\n";
		Sleep(2500);
		system("cls");


		enemyHP = 50;
		cout << "  !!! a new enemy spawned !!!\n";
		Sleep(2500);
		system("cls");


	}
	if (hp <= 0) {
		system("cls");
		cout << "   you lost!\n";
		Sleep(2500);
		cout << "   GAME OVER \n";
		Sleep(2500);
		break;


	}

	

}




return 0;
}
