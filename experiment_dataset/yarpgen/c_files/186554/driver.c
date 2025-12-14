#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 305016467U;
unsigned short var_4 = (unsigned short)47016;
unsigned char var_8 = (unsigned char)160;
unsigned int var_11 = 1604899237U;
int zero = 0;
unsigned char var_12 = (unsigned char)26;
unsigned int var_13 = 679637075U;
void init() {
}

void checksum() {
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
