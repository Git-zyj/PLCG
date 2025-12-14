#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
long long int var_5 = 4442615608818868395LL;
unsigned int var_6 = 24381233U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)88;
unsigned char var_15 = (unsigned char)168;
int zero = 0;
short var_16 = (short)10876;
short var_17 = (short)-19378;
unsigned int var_18 = 2997126967U;
unsigned long long int var_19 = 5899232754309619141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
