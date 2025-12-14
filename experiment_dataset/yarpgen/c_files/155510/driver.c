#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
signed char var_1 = (signed char)-91;
unsigned short var_2 = (unsigned short)48165;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1824975776U;
int zero = 0;
int var_15 = 1855256372;
unsigned long long int var_16 = 7422024543422198584ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
