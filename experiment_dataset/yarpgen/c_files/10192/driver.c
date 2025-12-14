#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11913494223818313055ULL;
long long int var_4 = -9181743303411820634LL;
short var_6 = (short)5994;
unsigned short var_7 = (unsigned short)50462;
unsigned int var_10 = 2497838468U;
int zero = 0;
unsigned char var_13 = (unsigned char)29;
signed char var_14 = (signed char)75;
int var_15 = -263337390;
signed char var_16 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
