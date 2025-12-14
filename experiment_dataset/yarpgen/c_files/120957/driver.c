#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 1205867073383716849ULL;
unsigned int var_16 = 728344707U;
int zero = 0;
long long int var_17 = 6195894526895536406LL;
signed char var_18 = (signed char)-31;
unsigned int var_19 = 3953618985U;
short var_20 = (short)13624;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
