#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1820164529U;
long long int var_4 = -4062139329823331011LL;
unsigned long long int var_13 = 2748460419404758127ULL;
unsigned int var_14 = 3228336265U;
int zero = 0;
long long int var_15 = -1891395022019066393LL;
int var_16 = 1426571438;
int var_17 = -260993895;
void init() {
}

void checksum() {
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
