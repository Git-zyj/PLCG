#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_7 = 8164935355540144571LL;
int zero = 0;
short var_13 = (short)13839;
short var_14 = (short)10910;
short var_15 = (short)-9312;
unsigned short var_16 = (unsigned short)44405;
unsigned int var_17 = 1966979608U;
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
