#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23744;
unsigned char var_5 = (unsigned char)99;
_Bool var_7 = (_Bool)1;
long long int var_9 = -2754897289912646731LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)131;
int var_13 = -1977293065;
int zero = 0;
unsigned int var_14 = 2085959179U;
unsigned short var_15 = (unsigned short)63553;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
