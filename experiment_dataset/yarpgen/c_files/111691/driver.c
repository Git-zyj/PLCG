#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4058749903U;
unsigned char var_3 = (unsigned char)160;
unsigned int var_5 = 3451080869U;
unsigned short var_7 = (unsigned short)23836;
unsigned long long int var_10 = 4239988716300996207ULL;
unsigned char var_12 = (unsigned char)188;
int zero = 0;
unsigned int var_14 = 1983090336U;
long long int var_15 = 5373703702828764487LL;
int var_16 = 2104756487;
short var_17 = (short)16952;
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
