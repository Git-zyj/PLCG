#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5774;
unsigned long long int var_7 = 17619477421522254173ULL;
unsigned int var_10 = 1038429014U;
int zero = 0;
short var_15 = (short)2020;
unsigned int var_16 = 2010105122U;
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
