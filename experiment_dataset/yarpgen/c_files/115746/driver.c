#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2019942352;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)173;
int var_3 = -1606123499;
unsigned char var_4 = (unsigned char)57;
unsigned char var_7 = (unsigned char)204;
int var_10 = 1174980095;
unsigned short var_12 = (unsigned short)55608;
unsigned char var_14 = (unsigned char)188;
short var_15 = (short)26866;
unsigned char var_16 = (unsigned char)135;
int zero = 0;
unsigned short var_17 = (unsigned short)36474;
unsigned long long int var_18 = 1899747751403221360ULL;
unsigned int var_19 = 1457054017U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
