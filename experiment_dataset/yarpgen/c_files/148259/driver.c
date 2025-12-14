#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5052761258223710194ULL;
unsigned int var_9 = 1760259381U;
unsigned long long int var_10 = 10470084607992353428ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)48090;
unsigned short var_14 = (unsigned short)51274;
unsigned short var_15 = (unsigned short)2694;
unsigned long long int var_16 = 9077494461800015803ULL;
unsigned int var_17 = 1595621070U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
