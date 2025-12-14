#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2533847025U;
unsigned char var_1 = (unsigned char)152;
unsigned short var_3 = (unsigned short)6033;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-91;
unsigned short var_6 = (unsigned short)38883;
int var_7 = -2020790963;
signed char var_8 = (signed char)-14;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 2340328465772282539ULL;
int var_11 = 725212279;
short var_12 = (short)1414;
unsigned long long int var_13 = 12100519508412669368ULL;
unsigned long long int var_14 = 5403349540015003628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
