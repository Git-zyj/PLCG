#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)3643;
signed char var_6 = (signed char)-76;
unsigned short var_7 = (unsigned short)30012;
unsigned long long int var_10 = 9396698668326850355ULL;
short var_15 = (short)2400;
short var_17 = (short)-22884;
unsigned short var_18 = (unsigned short)30225;
int zero = 0;
unsigned int var_19 = 3416291739U;
long long int var_20 = 2777630587276316125LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
