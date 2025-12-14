#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18111;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)19;
short var_4 = (short)30590;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 13776327267072449399ULL;
unsigned int var_11 = 161237337U;
signed char var_12 = (signed char)51;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6352112567400295234ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)56810;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
