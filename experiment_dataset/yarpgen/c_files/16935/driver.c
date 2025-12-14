#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2087546798;
short var_4 = (short)7919;
unsigned short var_10 = (unsigned short)48386;
int zero = 0;
signed char var_11 = (signed char)101;
short var_12 = (short)3354;
unsigned char var_13 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
