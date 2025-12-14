#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1467503167225098487ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 843454045U;
int var_12 = 1953819824;
unsigned short var_13 = (unsigned short)41087;
unsigned short var_14 = (unsigned short)53758;
int zero = 0;
long long int var_16 = -8105646121188848274LL;
long long int var_17 = 8808995861640640382LL;
void init() {
}

void checksum() {
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
