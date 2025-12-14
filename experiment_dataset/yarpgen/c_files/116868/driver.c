#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)42;
unsigned int var_4 = 1469226939U;
int var_5 = -1476436829;
unsigned char var_7 = (unsigned char)131;
long long int var_11 = 6538228091160368369LL;
unsigned short var_12 = (unsigned short)8274;
unsigned int var_13 = 1522058452U;
unsigned char var_14 = (unsigned char)14;
unsigned long long int var_16 = 1467721256622107917ULL;
int zero = 0;
short var_17 = (short)-7724;
unsigned char var_18 = (unsigned char)149;
long long int var_19 = 3107789935819734886LL;
int var_20 = -491086024;
long long int var_21 = -4487955566275049682LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
