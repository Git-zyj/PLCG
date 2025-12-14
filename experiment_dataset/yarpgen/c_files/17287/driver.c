#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14733548232647702384ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 11635610712920128483ULL;
short var_10 = (short)14002;
signed char var_13 = (signed char)-61;
unsigned int var_15 = 1472867666U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-97;
int zero = 0;
signed char var_20 = (signed char)-74;
unsigned long long int var_21 = 4922854084261814418ULL;
short var_22 = (short)-8203;
short var_23 = (short)-32126;
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
