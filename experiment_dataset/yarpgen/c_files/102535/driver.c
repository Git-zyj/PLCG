#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 130650407;
int var_13 = 502261889;
unsigned short var_17 = (unsigned short)7746;
unsigned int var_18 = 2476922110U;
int zero = 0;
signed char var_20 = (signed char)-14;
unsigned short var_21 = (unsigned short)48311;
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
