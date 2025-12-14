#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 7169217547269774977ULL;
unsigned short var_12 = (unsigned short)43161;
int zero = 0;
unsigned int var_14 = 3995198494U;
unsigned short var_15 = (unsigned short)24646;
unsigned short var_16 = (unsigned short)303;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
