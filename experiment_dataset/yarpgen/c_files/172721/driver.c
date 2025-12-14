#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11622761806468093101ULL;
unsigned char var_5 = (unsigned char)115;
long long int var_6 = -7301141563507548989LL;
short var_10 = (short)11053;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)52713;
int zero = 0;
unsigned char var_17 = (unsigned char)179;
unsigned int var_18 = 1823058491U;
long long int var_19 = 6081074762728487068LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
