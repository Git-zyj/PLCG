#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45489;
unsigned char var_3 = (unsigned char)185;
long long int var_4 = -1560056104515101022LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)220;
int var_12 = 1472828792;
long long int var_17 = 8413087830802109974LL;
int zero = 0;
unsigned short var_20 = (unsigned short)9860;
long long int var_21 = 6947802161621687959LL;
unsigned char var_22 = (unsigned char)146;
_Bool var_23 = (_Bool)1;
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
