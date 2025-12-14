#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned short var_1 = (unsigned short)34765;
unsigned long long int var_10 = 3868277713877912006ULL;
long long int var_12 = -987459906968239883LL;
int zero = 0;
unsigned long long int var_13 = 4766437428685266063ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
