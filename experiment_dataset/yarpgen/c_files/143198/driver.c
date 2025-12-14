#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 679515292U;
unsigned int var_19 = 455845444U;
signed char var_20 = (signed char)41;
unsigned long long int var_21 = 2285034104996797559ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
