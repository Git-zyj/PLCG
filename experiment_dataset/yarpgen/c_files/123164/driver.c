#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28413;
unsigned long long int var_7 = 14414835111049368723ULL;
unsigned int var_8 = 1718790434U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1487403294U;
int zero = 0;
signed char var_14 = (signed char)-125;
long long int var_15 = -4741951450861219878LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
