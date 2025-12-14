#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1061520423541013066ULL;
signed char var_5 = (signed char)-76;
unsigned int var_7 = 2222365579U;
long long int var_10 = -6520207461591711663LL;
signed char var_14 = (signed char)6;
unsigned long long int var_15 = 11326980666623280022ULL;
unsigned long long int var_17 = 16281291185961820686ULL;
int zero = 0;
short var_19 = (short)32593;
unsigned int var_20 = 3116747443U;
short var_21 = (short)9073;
unsigned short var_22 = (unsigned short)30483;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
