#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)54599;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)32592;
unsigned long long int var_8 = 14029641023682340238ULL;
short var_10 = (short)8019;
unsigned int var_11 = 1701556U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)14730;
unsigned short var_17 = (unsigned short)63874;
int var_18 = -1103716721;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
