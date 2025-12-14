#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4943228363822386464LL;
int var_4 = 648885012;
unsigned char var_5 = (unsigned char)101;
unsigned char var_7 = (unsigned char)253;
unsigned char var_9 = (unsigned char)50;
_Bool var_10 = (_Bool)0;
short var_12 = (short)30755;
unsigned long long int var_13 = 2598573875914265596ULL;
int zero = 0;
short var_14 = (short)-22923;
int var_15 = 407174125;
short var_16 = (short)-27970;
unsigned int var_17 = 1282149921U;
long long int var_18 = 432739787575446700LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
