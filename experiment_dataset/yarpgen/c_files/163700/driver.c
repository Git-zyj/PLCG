#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1612733535;
short var_2 = (short)-27875;
short var_4 = (short)-9139;
short var_13 = (short)-13380;
int zero = 0;
unsigned short var_14 = (unsigned short)51750;
unsigned short var_15 = (unsigned short)4175;
unsigned short var_16 = (unsigned short)59691;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
