#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_16 = (unsigned char)253;
unsigned int var_17 = 2219866457U;
int var_19 = -170194165;
int zero = 0;
unsigned long long int var_20 = 9825676501691437177ULL;
unsigned int var_21 = 2035009027U;
int var_22 = 1343265723;
unsigned int var_23 = 2891262254U;
void init() {
}

void checksum() {
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
