#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2667010918U;
unsigned char var_2 = (unsigned char)196;
short var_5 = (short)-5769;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_15 = (signed char)97;
int zero = 0;
unsigned long long int var_18 = 3717746062546085048ULL;
unsigned char var_19 = (unsigned char)2;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
