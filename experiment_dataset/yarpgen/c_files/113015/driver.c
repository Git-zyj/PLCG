#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 49219902U;
int var_1 = 145049323;
unsigned long long int var_3 = 2426202844723369211ULL;
unsigned long long int var_4 = 1349197396675946645ULL;
unsigned short var_6 = (unsigned short)44092;
long long int var_8 = 4292347384075272376LL;
unsigned char var_10 = (unsigned char)244;
int zero = 0;
unsigned int var_15 = 139640455U;
short var_16 = (short)-7545;
int var_17 = 636845443;
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
