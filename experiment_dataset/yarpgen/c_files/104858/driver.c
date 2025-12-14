#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3603646982077888371LL;
long long int var_4 = 5144735213362037473LL;
unsigned long long int var_6 = 121731761211337206ULL;
long long int var_11 = -5142843059137401328LL;
unsigned short var_14 = (unsigned short)56779;
int zero = 0;
signed char var_15 = (signed char)-78;
long long int var_16 = -2553388070882573098LL;
unsigned long long int var_17 = 6467743433687156012ULL;
unsigned char var_18 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
