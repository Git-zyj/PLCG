#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-16854;
int zero = 0;
unsigned long long int var_15 = 6424223552592674382ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)38544;
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
