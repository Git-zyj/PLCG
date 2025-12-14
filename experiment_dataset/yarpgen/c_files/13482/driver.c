#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1486584114;
unsigned short var_2 = (unsigned short)20777;
unsigned long long int var_5 = 14999894042267229175ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1750596294U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)8788;
unsigned int var_13 = 2524955428U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
