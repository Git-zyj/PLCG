#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 18020810724840715103ULL;
unsigned short var_2 = (unsigned short)5938;
unsigned short var_3 = (unsigned short)51881;
unsigned char var_4 = (unsigned char)230;
unsigned char var_5 = (unsigned char)8;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)244;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)173;
int zero = 0;
unsigned long long int var_14 = 18153957947148189010ULL;
unsigned short var_15 = (unsigned short)17609;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
