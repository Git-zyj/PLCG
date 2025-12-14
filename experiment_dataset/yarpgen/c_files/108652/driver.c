#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)13518;
int var_3 = -1166840498;
int var_5 = -301058058;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-20290;
int var_8 = -1285861334;
unsigned int var_10 = 331066758U;
int zero = 0;
short var_11 = (short)-4633;
short var_12 = (short)-19362;
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
