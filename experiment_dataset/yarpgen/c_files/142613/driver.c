#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_7 = 8186377823349724588ULL;
int zero = 0;
long long int var_11 = -2523664849970942245LL;
unsigned long long int var_12 = 12471332938410211938ULL;
long long int var_13 = -7900920137635179436LL;
long long int var_14 = 2612967157761214183LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
