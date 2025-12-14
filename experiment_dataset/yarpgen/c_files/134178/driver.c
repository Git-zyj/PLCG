#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 763721446U;
unsigned int var_8 = 2778948655U;
unsigned int var_11 = 2546090976U;
int zero = 0;
signed char var_13 = (signed char)95;
unsigned char var_14 = (unsigned char)128;
unsigned short var_15 = (unsigned short)14704;
short var_16 = (short)-22556;
unsigned char var_17 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
