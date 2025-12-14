#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)124;
int var_11 = 1757031382;
unsigned long long int var_12 = 4411673020717522096ULL;
int var_13 = 298274384;
unsigned int var_15 = 3580781444U;
int zero = 0;
unsigned short var_17 = (unsigned short)24008;
unsigned int var_18 = 2189006505U;
unsigned int var_19 = 2648945110U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
