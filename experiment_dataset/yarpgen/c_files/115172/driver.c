#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2982510992361483865LL;
long long int var_5 = 4647381913121119220LL;
signed char var_7 = (signed char)-91;
long long int var_10 = 6854466450410859226LL;
int zero = 0;
short var_15 = (short)-30292;
unsigned int var_16 = 722838173U;
_Bool var_17 = (_Bool)1;
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
