#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14940728650447345917ULL;
signed char var_6 = (signed char)86;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)41506;
int zero = 0;
unsigned long long int var_13 = 11753271649305513653ULL;
unsigned int var_14 = 3467016306U;
int var_15 = -123209772;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
