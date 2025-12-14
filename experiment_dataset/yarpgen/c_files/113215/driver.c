#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_6 = (unsigned char)144;
long long int var_7 = 867215862651108162LL;
unsigned short var_12 = (unsigned short)28794;
unsigned short var_13 = (unsigned short)2592;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_18 = 9030946281175400601LL;
long long int var_19 = -2769602325098973346LL;
short var_20 = (short)10079;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
