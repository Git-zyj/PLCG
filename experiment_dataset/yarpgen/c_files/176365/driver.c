#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2053084613;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1663996659757684455LL;
unsigned char var_5 = (unsigned char)238;
short var_6 = (short)19617;
int var_11 = 1337779914;
signed char var_13 = (signed char)-119;
_Bool var_15 = (_Bool)0;
int var_17 = -722215580;
int zero = 0;
long long int var_18 = -1806412998596911988LL;
long long int var_19 = 6627781767555517720LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
