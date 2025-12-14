#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned int var_4 = 2578983152U;
unsigned int var_5 = 2018448320U;
long long int var_7 = 8664865879221036599LL;
unsigned char var_10 = (unsigned char)117;
unsigned int var_11 = 2365957197U;
unsigned short var_14 = (unsigned short)16953;
unsigned short var_15 = (unsigned short)33109;
int zero = 0;
long long int var_16 = 453083998887064957LL;
unsigned int var_17 = 1020200249U;
unsigned char var_18 = (unsigned char)80;
void init() {
}

void checksum() {
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
