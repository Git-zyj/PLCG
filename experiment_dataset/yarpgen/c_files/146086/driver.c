#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1269223057;
unsigned int var_11 = 1078851342U;
unsigned long long int var_15 = 11189668278039352823ULL;
int zero = 0;
signed char var_16 = (signed char)-36;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3466054876916872052LL;
void init() {
}

void checksum() {
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
