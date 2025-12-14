#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 467157901;
signed char var_2 = (signed char)-55;
_Bool var_3 = (_Bool)1;
long long int var_5 = 8492302190215022913LL;
signed char var_7 = (signed char)16;
long long int var_8 = -3066176789747300632LL;
signed char var_9 = (signed char)52;
unsigned int var_10 = 2748287040U;
short var_11 = (short)13229;
short var_12 = (short)31948;
unsigned char var_14 = (unsigned char)202;
signed char var_16 = (signed char)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 2095004287;
short var_20 = (short)15452;
unsigned short var_21 = (unsigned short)41618;
_Bool var_22 = (_Bool)1;
int var_23 = 1026957590;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
