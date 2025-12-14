#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4885;
unsigned long long int var_5 = 7240485096945880497ULL;
_Bool var_7 = (_Bool)0;
long long int var_9 = -6951504316767321534LL;
int zero = 0;
unsigned short var_10 = (unsigned short)29694;
long long int var_11 = 3883026899906074212LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
