#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6499267619116962867ULL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 714300112U;
short var_12 = (short)18085;
short var_14 = (short)2721;
unsigned char var_18 = (unsigned char)131;
unsigned long long int var_19 = 17450437610029308823ULL;
int zero = 0;
unsigned long long int var_20 = 1007345976797251209ULL;
short var_21 = (short)-18459;
unsigned char var_22 = (unsigned char)97;
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
