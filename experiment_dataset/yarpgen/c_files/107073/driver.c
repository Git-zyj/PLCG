#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1396891170U;
unsigned char var_3 = (unsigned char)227;
unsigned short var_7 = (unsigned short)18096;
unsigned int var_9 = 2022527405U;
unsigned long long int var_11 = 17028638354661627547ULL;
unsigned long long int var_12 = 937055884406229675ULL;
unsigned int var_13 = 2519393994U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)6759;
unsigned int var_21 = 763187718U;
signed char var_22 = (signed char)12;
int var_23 = -600291420;
unsigned char var_24 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
