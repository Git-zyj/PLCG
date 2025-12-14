#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)4646;
long long int var_3 = 7971232617741537016LL;
short var_5 = (short)11951;
signed char var_6 = (signed char)81;
unsigned long long int var_8 = 14502076061242933229ULL;
long long int var_10 = 4432075979583660201LL;
int zero = 0;
unsigned int var_13 = 3694746304U;
int var_14 = 2054567077;
long long int var_15 = 6325063766934892109LL;
long long int var_16 = 4052831358758251868LL;
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
