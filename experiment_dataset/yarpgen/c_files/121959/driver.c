#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 65816662U;
unsigned short var_2 = (unsigned short)48894;
unsigned short var_4 = (unsigned short)43477;
unsigned short var_5 = (unsigned short)59313;
long long int var_7 = 358350435096516787LL;
signed char var_9 = (signed char)-77;
unsigned short var_12 = (unsigned short)16752;
int zero = 0;
int var_13 = 1572873278;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)8;
signed char var_16 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
