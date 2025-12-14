#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1599349970;
_Bool var_10 = (_Bool)0;
int var_15 = 817633035;
long long int var_16 = 3581006394983141929LL;
int zero = 0;
signed char var_18 = (signed char)-99;
long long int var_19 = 6240216850781109241LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
