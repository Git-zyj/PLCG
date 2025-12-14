#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6742441089702017878LL;
unsigned long long int var_2 = 6113625049026468892ULL;
signed char var_5 = (signed char)-102;
short var_7 = (short)7981;
signed char var_8 = (signed char)-40;
int zero = 0;
unsigned int var_14 = 802195490U;
unsigned long long int var_15 = 7038441182407485882ULL;
signed char var_16 = (signed char)35;
unsigned char var_17 = (unsigned char)175;
int var_18 = -2096216772;
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
