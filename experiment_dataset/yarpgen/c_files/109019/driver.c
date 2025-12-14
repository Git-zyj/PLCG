#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1678811753U;
signed char var_10 = (signed char)20;
unsigned long long int var_14 = 15833628760837110692ULL;
int zero = 0;
signed char var_18 = (signed char)7;
long long int var_19 = -1110009546503853327LL;
unsigned short var_20 = (unsigned short)29270;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12257625543566861062ULL;
int var_23 = 407562862;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
