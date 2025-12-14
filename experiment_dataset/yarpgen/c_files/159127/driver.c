#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 3895915351U;
short var_4 = (short)9996;
unsigned long long int var_6 = 6113849233417665351ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3779865076U;
short var_12 = (short)-20101;
int zero = 0;
long long int var_13 = 7607928240867342225LL;
short var_14 = (short)-19385;
void init() {
}

void checksum() {
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
