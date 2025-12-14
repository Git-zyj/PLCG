#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 16155539943131258151ULL;
unsigned char var_5 = (unsigned char)245;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 4175533425U;
unsigned int var_12 = 3756201671U;
unsigned long long int var_13 = 16264641584207667955ULL;
void init() {
}

void checksum() {
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
