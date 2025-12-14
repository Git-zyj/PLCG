#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = -346693357;
unsigned int var_5 = 2733726358U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-12;
unsigned int var_13 = 524777233U;
int zero = 0;
unsigned short var_20 = (unsigned short)61444;
long long int var_21 = 8651508087099225791LL;
unsigned char var_22 = (unsigned char)232;
unsigned short var_23 = (unsigned short)46401;
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
