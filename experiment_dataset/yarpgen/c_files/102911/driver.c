#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
unsigned long long int var_3 = 12155161738829460059ULL;
unsigned int var_5 = 1506265937U;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)245;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)6;
unsigned int var_18 = 724571367U;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
signed char var_20 = (signed char)118;
int var_21 = 794977808;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
