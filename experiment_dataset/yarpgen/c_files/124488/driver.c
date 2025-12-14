#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)224;
short var_3 = (short)-15594;
int var_7 = -1300547324;
unsigned long long int var_8 = 13579088388974098813ULL;
int var_10 = -366765269;
int var_11 = -1955176734;
int var_13 = -1470064068;
int zero = 0;
unsigned short var_14 = (unsigned short)38544;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3423837626420869230LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
