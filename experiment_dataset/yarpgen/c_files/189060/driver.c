#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5524636088537437116ULL;
signed char var_6 = (signed char)95;
int var_7 = 2009629011;
unsigned char var_11 = (unsigned char)123;
int zero = 0;
long long int var_17 = 3564336085268454600LL;
unsigned long long int var_18 = 14674920976093978013ULL;
void init() {
}

void checksum() {
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
