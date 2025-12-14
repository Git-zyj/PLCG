#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
long long int var_4 = 3491170747280832507LL;
long long int var_6 = -5211902163075878855LL;
long long int var_8 = -3162381873138712072LL;
unsigned int var_10 = 1752491105U;
long long int var_16 = 3911128695626067008LL;
int zero = 0;
unsigned int var_17 = 3186725045U;
unsigned int var_18 = 2640799424U;
int var_19 = 24652615;
int var_20 = -1328985625;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
