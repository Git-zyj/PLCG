#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3868581581U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)45876;
short var_9 = (short)29397;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1425034380U;
unsigned short var_14 = (unsigned short)14955;
unsigned short var_16 = (unsigned short)36956;
signed char var_17 = (signed char)-72;
int zero = 0;
unsigned short var_19 = (unsigned short)9980;
unsigned char var_20 = (unsigned char)233;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1591468629U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
