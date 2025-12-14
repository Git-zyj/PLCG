#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33811;
int var_3 = -1075850492;
signed char var_5 = (signed char)71;
unsigned short var_6 = (unsigned short)38415;
unsigned int var_10 = 2881009422U;
unsigned long long int var_11 = 12128569457128152547ULL;
unsigned short var_12 = (unsigned short)57914;
unsigned short var_13 = (unsigned short)8279;
_Bool var_14 = (_Bool)1;
short var_17 = (short)22737;
signed char var_18 = (signed char)74;
int zero = 0;
int var_20 = 1414753963;
int var_21 = 1222218923;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-99;
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
