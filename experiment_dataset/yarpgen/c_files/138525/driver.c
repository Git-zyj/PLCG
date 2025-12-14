#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 467013230;
unsigned short var_6 = (unsigned short)46648;
int var_7 = 625781360;
int zero = 0;
int var_14 = 1852854899;
unsigned int var_15 = 3279325999U;
unsigned short var_16 = (unsigned short)22571;
unsigned short var_17 = (unsigned short)19105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
