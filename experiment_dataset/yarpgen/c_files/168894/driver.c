#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1149951830845816035LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 5031476108725973313ULL;
int zero = 0;
unsigned int var_19 = 859219125U;
int var_20 = -1314270368;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
