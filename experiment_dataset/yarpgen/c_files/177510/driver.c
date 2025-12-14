#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8343;
unsigned long long int var_3 = 13196604720763503474ULL;
long long int var_4 = 8089311818120018699LL;
unsigned char var_6 = (unsigned char)183;
long long int var_7 = -8384651420311318664LL;
short var_9 = (short)30339;
short var_11 = (short)-13885;
short var_12 = (short)25648;
unsigned int var_14 = 1164354416U;
int zero = 0;
unsigned short var_15 = (unsigned short)36342;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-30291;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
