#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)111;
unsigned long long int var_4 = 1853849429342942485ULL;
unsigned long long int var_7 = 16979187854266650976ULL;
signed char var_10 = (signed char)-36;
unsigned short var_11 = (unsigned short)59291;
unsigned short var_12 = (unsigned short)30808;
unsigned char var_13 = (unsigned char)125;
int zero = 0;
unsigned short var_15 = (unsigned short)36826;
unsigned int var_16 = 2987638490U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
