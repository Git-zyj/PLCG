#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-7000;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = -7303226668892658173LL;
long long int var_13 = 3653835116230113338LL;
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
