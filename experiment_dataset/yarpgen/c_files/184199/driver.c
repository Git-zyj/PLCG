#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1756443729;
unsigned long long int var_3 = 12141882229420379814ULL;
int var_4 = -2081912235;
int var_6 = 165251913;
short var_12 = (short)-22422;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -379500008916789973LL;
signed char var_15 = (signed char)-64;
short var_16 = (short)12715;
void init() {
}

void checksum() {
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
