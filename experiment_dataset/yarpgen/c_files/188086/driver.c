#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_11 = (short)7236;
unsigned long long int var_12 = 15000462302539644194ULL;
unsigned char var_16 = (unsigned char)232;
long long int var_17 = 3694715059827283849LL;
int zero = 0;
signed char var_20 = (signed char)38;
long long int var_21 = 68904737206848826LL;
void init() {
}

void checksum() {
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
