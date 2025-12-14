#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = 6107849638287141068LL;
int var_7 = -1541813642;
signed char var_10 = (signed char)-64;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned int var_17 = 4034508256U;
void init() {
}

void checksum() {
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
