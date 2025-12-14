#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20413;
unsigned short var_3 = (unsigned short)29137;
unsigned short var_4 = (unsigned short)30291;
signed char var_5 = (signed char)73;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
long long int var_12 = 187299300419672875LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7607949353645886220LL;
signed char var_15 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
