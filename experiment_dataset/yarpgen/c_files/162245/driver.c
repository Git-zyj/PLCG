#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 75315437U;
_Bool var_12 = (_Bool)0;
long long int var_14 = 2619161390810235716LL;
int zero = 0;
int var_15 = -948421762;
unsigned long long int var_16 = 2764839310895396137ULL;
long long int var_17 = -3929384310225981749LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
