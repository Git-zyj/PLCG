#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-55;
unsigned int var_2 = 1262739037U;
unsigned int var_3 = 1845885582U;
int var_9 = -1900617845;
unsigned char var_10 = (unsigned char)98;
unsigned long long int var_11 = 2727793024890864867ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)9611;
int zero = 0;
short var_15 = (short)-9386;
unsigned int var_16 = 3638237811U;
short var_17 = (short)24303;
unsigned char var_18 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
