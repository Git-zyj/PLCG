#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
signed char var_1 = (signed char)-7;
long long int var_11 = -6128369776794997860LL;
unsigned char var_12 = (unsigned char)232;
unsigned short var_15 = (unsigned short)65268;
int zero = 0;
int var_16 = 176064067;
short var_17 = (short)28134;
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
