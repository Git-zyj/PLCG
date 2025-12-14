#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10697728756275429423ULL;
unsigned int var_4 = 855352480U;
unsigned char var_5 = (unsigned char)171;
short var_6 = (short)990;
short var_7 = (short)-32624;
unsigned short var_13 = (unsigned short)33218;
long long int var_15 = -4710759990131525651LL;
long long int var_16 = 4105509512345732184LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 15370283344134239134ULL;
unsigned short var_20 = (unsigned short)14861;
int var_21 = -2021797035;
void init() {
}

void checksum() {
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
