#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-26735;
short var_10 = (short)30408;
unsigned short var_13 = (unsigned short)32298;
unsigned long long int var_17 = 16131369663604924742ULL;
int zero = 0;
unsigned long long int var_20 = 6345039805049111060ULL;
short var_21 = (short)-28709;
void init() {
}

void checksum() {
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
