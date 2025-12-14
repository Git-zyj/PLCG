#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 8047047556907834374LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)113;
unsigned int var_6 = 1224015970U;
long long int var_7 = 2782631983795526180LL;
int zero = 0;
int var_10 = -2006044878;
unsigned char var_11 = (unsigned char)209;
signed char var_12 = (signed char)48;
int var_13 = 496453951;
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
