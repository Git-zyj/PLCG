#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31318;
long long int var_14 = 2657003910445682375LL;
int zero = 0;
unsigned int var_15 = 15666630U;
short var_16 = (short)-22093;
unsigned char var_17 = (unsigned char)70;
unsigned int var_18 = 4087901655U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
