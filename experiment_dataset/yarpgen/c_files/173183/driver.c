#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 41436177;
long long int var_3 = 5526973775894086874LL;
signed char var_4 = (signed char)-9;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)34;
unsigned char var_8 = (unsigned char)118;
unsigned char var_10 = (unsigned char)210;
unsigned char var_11 = (unsigned char)49;
unsigned char var_14 = (unsigned char)99;
unsigned int var_15 = 1710935413U;
int zero = 0;
short var_16 = (short)24291;
short var_17 = (short)-24951;
unsigned int var_18 = 574856483U;
void init() {
}

void checksum() {
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
