#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 256471558U;
unsigned int var_5 = 3675722148U;
unsigned int var_14 = 2632729605U;
int zero = 0;
unsigned int var_16 = 3063190334U;
unsigned int var_17 = 1742955005U;
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
