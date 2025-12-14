#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2132612591U;
unsigned long long int var_4 = 17288514879205425658ULL;
int var_5 = -118821177;
int var_8 = -1187501557;
int var_10 = 631555527;
unsigned int var_14 = 1663839522U;
int zero = 0;
short var_15 = (short)-32376;
unsigned long long int var_16 = 15829951779149389825ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
