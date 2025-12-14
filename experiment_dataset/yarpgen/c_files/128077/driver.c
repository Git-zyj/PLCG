#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11288505827609709381ULL;
unsigned long long int var_7 = 9590934957928081418ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 4258840166U;
unsigned int var_15 = 902324482U;
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
