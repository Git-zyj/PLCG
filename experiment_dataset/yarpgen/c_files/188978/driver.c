#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 4157731867U;
unsigned int var_12 = 2757729472U;
unsigned int var_13 = 1289856622U;
int zero = 0;
unsigned int var_16 = 760527526U;
unsigned int var_17 = 1567540255U;
unsigned int var_18 = 2846854210U;
void init() {
}

void checksum() {
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
