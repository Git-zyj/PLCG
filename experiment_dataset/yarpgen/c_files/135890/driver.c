#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = 1350879565;
short var_6 = (short)20695;
int var_9 = 666912249;
long long int var_10 = -4321902585775020404LL;
unsigned int var_13 = 2641702737U;
signed char var_14 = (signed char)-6;
int zero = 0;
int var_15 = 1077603645;
unsigned short var_16 = (unsigned short)63535;
unsigned short var_17 = (unsigned short)3698;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
