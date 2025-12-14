#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8761055205539700208ULL;
unsigned int var_2 = 1247909017U;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 1054446458U;
signed char var_10 = (signed char)119;
unsigned short var_13 = (unsigned short)57774;
int zero = 0;
unsigned int var_14 = 2399214925U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1878350044U;
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
