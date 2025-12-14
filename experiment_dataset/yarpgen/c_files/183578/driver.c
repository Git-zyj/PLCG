#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5151023656944666441LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1298528214U;
unsigned int var_10 = 1471290536U;
int zero = 0;
long long int var_12 = 1591018283228306123LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
