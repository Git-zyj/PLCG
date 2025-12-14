#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2399705523U;
short var_6 = (short)575;
short var_7 = (short)12593;
unsigned long long int var_11 = 16850483168917002823ULL;
int zero = 0;
unsigned int var_14 = 1812509584U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)22010;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
