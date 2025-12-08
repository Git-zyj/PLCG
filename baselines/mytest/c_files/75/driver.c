#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48988;
short var_5 = (short)29632;
unsigned short var_6 = (unsigned short)49668;
unsigned short var_7 = (unsigned short)60334;
long long int var_10 = 1282048172831901566LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1220863612U;
void init() {
}

void checksum() {
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
