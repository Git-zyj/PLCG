#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2856;
unsigned int var_7 = 2192909610U;
int zero = 0;
unsigned int var_13 = 1278722860U;
long long int var_14 = 2984716141962248993LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1884177694U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
