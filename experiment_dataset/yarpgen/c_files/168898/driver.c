#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned char var_1 = (unsigned char)33;
_Bool var_4 = (_Bool)0;
int zero = 0;
long long int var_10 = 1350027610466452250LL;
unsigned long long int var_11 = 4108636094529281970ULL;
short var_12 = (short)-8489;
int var_13 = 2037590166;
unsigned long long int var_14 = 2438011939330145503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
