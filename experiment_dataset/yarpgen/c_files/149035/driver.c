#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1826442538;
signed char var_12 = (signed char)103;
unsigned long long int var_15 = 2804642485503192673ULL;
int zero = 0;
unsigned int var_16 = 160715008U;
unsigned short var_17 = (unsigned short)49389;
void init() {
}

void checksum() {
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
