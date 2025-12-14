#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24316;
unsigned short var_2 = (unsigned short)57859;
unsigned int var_4 = 3744344588U;
unsigned int var_5 = 1773795747U;
unsigned int var_6 = 2366826423U;
int var_7 = 1976349199;
int var_10 = 1696843052;
long long int var_11 = 91788685434564811LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int var_15 = 1600858868;
unsigned short var_16 = (unsigned short)10101;
unsigned short var_17 = (unsigned short)20267;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 899147211U;
short var_22 = (short)-21725;
void init() {
}

void checksum() {
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
