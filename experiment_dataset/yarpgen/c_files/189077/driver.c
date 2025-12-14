#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7864014366933371436LL;
unsigned char var_10 = (unsigned char)48;
unsigned int var_15 = 3737894104U;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
short var_18 = (short)-15616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
