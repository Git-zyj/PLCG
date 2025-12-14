#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 643160962U;
unsigned long long int var_4 = 10902519030262028929ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 15128367830437816676ULL;
unsigned long long int var_8 = 10840910236326613503ULL;
unsigned short var_10 = (unsigned short)42917;
unsigned short var_11 = (unsigned short)36875;
signed char var_14 = (signed char)-121;
signed char var_15 = (signed char)-13;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13985638229197335462ULL;
unsigned long long int var_19 = 12322913507734916938ULL;
int zero = 0;
unsigned long long int var_20 = 16161846594086566377ULL;
unsigned short var_21 = (unsigned short)46633;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)49280;
unsigned short var_24 = (unsigned short)48381;
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
