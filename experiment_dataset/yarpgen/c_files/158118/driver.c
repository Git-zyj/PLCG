#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3414;
unsigned int var_5 = 1105200854U;
unsigned int var_6 = 2216535748U;
unsigned short var_8 = (unsigned short)28298;
unsigned char var_9 = (unsigned char)70;
int zero = 0;
unsigned long long int var_13 = 679799527691237484ULL;
int var_14 = 1470549607;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
