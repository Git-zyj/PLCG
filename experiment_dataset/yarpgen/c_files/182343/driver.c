#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 452152197168324600ULL;
signed char var_1 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)0;
int var_4 = 1926126750;
int var_5 = -1736060221;
unsigned long long int var_6 = 14897924403362747467ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_10 = 1175373034658804002LL;
unsigned int var_11 = 2047938741U;
unsigned int var_12 = 2729727026U;
unsigned char var_13 = (unsigned char)23;
int zero = 0;
long long int var_14 = -6094866646855008167LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)25;
int var_17 = 562948200;
long long int var_18 = 9199375488130511350LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
