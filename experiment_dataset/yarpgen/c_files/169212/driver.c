#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 409989218U;
long long int var_3 = 400876820474877893LL;
unsigned int var_4 = 1705714621U;
unsigned int var_7 = 428674732U;
_Bool var_8 = (_Bool)0;
long long int var_11 = -851718916732362716LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)30922;
unsigned int var_16 = 1567144797U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
