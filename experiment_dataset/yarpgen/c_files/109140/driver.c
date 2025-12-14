#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16381802214482473654ULL;
short var_2 = (short)12239;
unsigned int var_5 = 3052289546U;
unsigned char var_9 = (unsigned char)250;
unsigned char var_11 = (unsigned char)209;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 3853137349U;
int zero = 0;
unsigned long long int var_16 = 14486368812926433995ULL;
int var_17 = -476026459;
unsigned int var_18 = 1204277542U;
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
