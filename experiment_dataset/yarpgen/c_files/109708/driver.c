#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24611;
unsigned long long int var_2 = 13610878178900551717ULL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-37;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -696378758;
unsigned int var_15 = 2550134061U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1528478286U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
