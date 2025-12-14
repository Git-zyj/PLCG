#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7992282700462258483LL;
unsigned int var_12 = 805813292U;
unsigned long long int var_16 = 11208335678833035441ULL;
int zero = 0;
short var_17 = (short)6766;
unsigned short var_18 = (unsigned short)44032;
int var_19 = 997918537;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
