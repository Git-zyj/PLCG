#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8118278448546629444ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 3979862768944591234LL;
unsigned long long int var_16 = 12170199610738229286ULL;
int var_17 = 2081496418;
unsigned int var_18 = 3512199843U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
