#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)3;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2543194798U;
_Bool var_7 = (_Bool)0;
long long int var_8 = -4475528605113728099LL;
long long int var_10 = -2272216681257932020LL;
int zero = 0;
int var_11 = 788508393;
short var_12 = (short)2422;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
