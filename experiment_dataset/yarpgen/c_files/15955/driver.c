#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 907856783U;
long long int var_5 = 3429082951449047669LL;
unsigned int var_7 = 2869890407U;
long long int var_8 = 2048505542619129590LL;
long long int var_10 = -1196467322489394315LL;
int zero = 0;
unsigned int var_11 = 1393398099U;
signed char var_12 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
