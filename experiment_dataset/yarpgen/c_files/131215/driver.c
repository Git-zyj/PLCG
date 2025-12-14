#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1032611513;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13985395362809192614ULL;
int var_5 = 1708312884;
int var_6 = 45725837;
int var_9 = 1788662423;
unsigned char var_10 = (unsigned char)5;
unsigned short var_16 = (unsigned short)48152;
int zero = 0;
signed char var_17 = (signed char)99;
signed char var_18 = (signed char)115;
void init() {
}

void checksum() {
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
