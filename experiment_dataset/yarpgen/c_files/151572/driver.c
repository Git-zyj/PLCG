#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 24022401;
unsigned int var_2 = 1627828048U;
unsigned long long int var_3 = 3341824443939497471ULL;
unsigned char var_5 = (unsigned char)98;
unsigned char var_7 = (unsigned char)42;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8427782346650581652ULL;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 2196818700712859594ULL;
unsigned short var_17 = (unsigned short)28198;
int zero = 0;
unsigned long long int var_20 = 1991653839326827406ULL;
unsigned long long int var_21 = 11503636070647049613ULL;
int var_22 = 1693277796;
unsigned int var_23 = 3696781422U;
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
