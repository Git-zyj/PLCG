#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1652379407;
unsigned char var_1 = (unsigned char)248;
signed char var_10 = (signed char)3;
short var_15 = (short)-25781;
int zero = 0;
unsigned char var_16 = (unsigned char)233;
unsigned long long int var_17 = 7247448932193249536ULL;
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
