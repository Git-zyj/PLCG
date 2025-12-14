#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1957027903U;
unsigned short var_11 = (unsigned short)51603;
unsigned short var_12 = (unsigned short)675;
unsigned short var_13 = (unsigned short)63250;
unsigned int var_14 = 957287350U;
int zero = 0;
short var_15 = (short)4894;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)800;
int var_18 = -715750475;
unsigned int var_19 = 187430177U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
