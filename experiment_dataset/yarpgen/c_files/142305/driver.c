#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -704370066;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_12 = (signed char)40;
int zero = 0;
short var_15 = (short)3605;
short var_16 = (short)-6569;
short var_17 = (short)-4446;
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
