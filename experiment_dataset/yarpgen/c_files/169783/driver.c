#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)46762;
unsigned short var_2 = (unsigned short)4374;
short var_3 = (short)-23676;
unsigned short var_4 = (unsigned short)56360;
unsigned char var_5 = (unsigned char)4;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = 4223909870481989967LL;
short var_9 = (short)-16240;
short var_10 = (short)30496;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)35;
int zero = 0;
short var_14 = (short)12108;
unsigned int var_15 = 2211451262U;
void init() {
}

void checksum() {
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
