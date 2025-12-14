#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)15;
unsigned long long int var_8 = 8482488858003072482ULL;
signed char var_12 = (signed char)-56;
unsigned char var_13 = (unsigned char)183;
int var_16 = 683067646;
signed char var_17 = (signed char)33;
unsigned char var_18 = (unsigned char)238;
int zero = 0;
unsigned int var_19 = 1337987292U;
int var_20 = -1615587228;
int var_21 = 27133924;
int var_22 = -1731751764;
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
