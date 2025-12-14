#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8091521208332823330LL;
unsigned int var_7 = 1046368941U;
unsigned int var_10 = 3223564953U;
unsigned short var_11 = (unsigned short)7521;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1584993782;
_Bool var_15 = (_Bool)1;
int var_16 = -930257831;
unsigned int var_17 = 541561774U;
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
