#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1164983975049120698LL;
signed char var_3 = (signed char)19;
unsigned int var_5 = 1663084962U;
unsigned long long int var_6 = 10229814120582920284ULL;
short var_12 = (short)-29891;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5848240634604278014LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1707351651U;
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
