#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_5 = 3477918467U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 690727214U;
int zero = 0;
unsigned int var_10 = 2651771690U;
unsigned long long int var_11 = 15351274066246943082ULL;
unsigned int var_12 = 2012646906U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)33347;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
