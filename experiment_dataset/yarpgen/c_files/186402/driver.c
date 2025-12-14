#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3129097419U;
unsigned long long int var_1 = 6390145323513593093ULL;
signed char var_5 = (signed char)116;
int var_10 = -1656370526;
long long int var_11 = 1469332420770130433LL;
unsigned char var_12 = (unsigned char)96;
short var_16 = (short)5601;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16182220519154637973ULL;
unsigned int var_19 = 144661515U;
int var_20 = 1164470255;
signed char var_21 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
