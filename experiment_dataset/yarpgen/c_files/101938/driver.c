#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2001083481;
unsigned long long int var_10 = 5239364888574882790ULL;
int var_11 = 806269799;
int zero = 0;
unsigned int var_15 = 1865925776U;
unsigned int var_16 = 1579335828U;
unsigned int var_17 = 1270483264U;
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
