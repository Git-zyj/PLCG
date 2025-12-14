#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2078229411U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 785027568430206494ULL;
short var_5 = (short)22351;
int zero = 0;
long long int var_13 = -1681804304147083208LL;
unsigned short var_14 = (unsigned short)38053;
unsigned long long int var_15 = 3699449283363744338ULL;
long long int var_16 = -4927434199125052629LL;
int var_17 = -1582263913;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
