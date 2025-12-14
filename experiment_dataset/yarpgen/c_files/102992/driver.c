#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_4 = -586609493918508321LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_14 = 3975362803470460639LL;
long long int var_15 = -1696419511108090271LL;
unsigned int var_16 = 786243486U;
void init() {
}

void checksum() {
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
