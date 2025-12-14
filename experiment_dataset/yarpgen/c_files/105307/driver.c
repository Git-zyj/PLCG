#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63276;
unsigned short var_3 = (unsigned short)29596;
unsigned long long int var_4 = 65427617487649084ULL;
unsigned short var_6 = (unsigned short)971;
unsigned short var_8 = (unsigned short)48100;
unsigned long long int var_10 = 64117906779149163ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)62296;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)156;
short var_15 = (short)-32449;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
