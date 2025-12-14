#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24132;
short var_1 = (short)-8917;
unsigned int var_2 = 1364252594U;
unsigned int var_3 = 2431186934U;
unsigned long long int var_4 = 16300413741425167034ULL;
unsigned short var_5 = (unsigned short)32265;
unsigned short var_6 = (unsigned short)36213;
unsigned short var_7 = (unsigned short)17079;
unsigned short var_8 = (unsigned short)27302;
unsigned short var_9 = (unsigned short)58205;
unsigned short var_10 = (unsigned short)10871;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 12913763352366252096ULL;
unsigned long long int var_14 = 9108083097396008552ULL;
unsigned short var_15 = (unsigned short)10681;
unsigned int var_16 = 508990707U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
