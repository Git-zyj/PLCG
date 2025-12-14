#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1309743858U;
unsigned int var_4 = 2153626385U;
unsigned long long int var_6 = 11164872777704294657ULL;
unsigned int var_11 = 1785562728U;
int var_12 = 870613201;
unsigned int var_15 = 599394192U;
int zero = 0;
signed char var_18 = (signed char)95;
short var_19 = (short)6539;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
