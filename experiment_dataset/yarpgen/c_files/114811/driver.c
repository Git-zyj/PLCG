#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1555332856U;
unsigned short var_8 = (unsigned short)8562;
unsigned short var_10 = (unsigned short)16017;
int zero = 0;
short var_11 = (short)23122;
unsigned long long int var_12 = 15805326230383118200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
