#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2001397843U;
unsigned int var_8 = 93646188U;
int var_9 = 781727626;
int zero = 0;
int var_15 = 694411081;
unsigned int var_16 = 1100727580U;
unsigned long long int var_17 = 4363536071895495139ULL;
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
