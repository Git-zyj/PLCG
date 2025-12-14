#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43532;
unsigned long long int var_10 = 7517070936158223623ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 4229300966U;
unsigned short var_19 = (unsigned short)1946;
int zero = 0;
long long int var_20 = 2569355596796754721LL;
int var_21 = -1303132792;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
