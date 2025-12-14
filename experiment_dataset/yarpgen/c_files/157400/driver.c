#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 767448236;
unsigned char var_4 = (unsigned char)140;
int var_7 = -1835595687;
short var_8 = (short)12998;
int zero = 0;
unsigned char var_14 = (unsigned char)209;
short var_15 = (short)10592;
unsigned long long int var_16 = 2781387345154002263ULL;
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
