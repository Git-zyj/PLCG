#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6098124487082853753LL;
short var_9 = (short)-2751;
int var_11 = 604026714;
int var_16 = 1260281067;
unsigned int var_17 = 183748881U;
int zero = 0;
unsigned short var_20 = (unsigned short)24069;
unsigned short var_21 = (unsigned short)1538;
unsigned int var_22 = 871723325U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
