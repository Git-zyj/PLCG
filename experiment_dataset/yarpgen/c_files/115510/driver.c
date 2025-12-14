#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4271971127U;
unsigned int var_5 = 251928467U;
unsigned int var_6 = 3789112242U;
long long int var_12 = 7424901271930269293LL;
unsigned char var_14 = (unsigned char)30;
int zero = 0;
unsigned int var_15 = 4002907075U;
long long int var_16 = -2584295689908898658LL;
void init() {
}

void checksum() {
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
