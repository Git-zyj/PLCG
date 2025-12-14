#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = 4419683342491875109LL;
unsigned char var_6 = (unsigned char)140;
int zero = 0;
long long int var_10 = 6213072589173567885LL;
long long int var_11 = -2559684462566191767LL;
int var_12 = -1137440868;
unsigned long long int var_13 = 2125718064265526586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
