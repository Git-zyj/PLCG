#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)33;
unsigned int var_10 = 364499791U;
unsigned char var_13 = (unsigned char)8;
int zero = 0;
unsigned int var_15 = 2085959437U;
unsigned long long int var_16 = 3171909693705394133ULL;
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
