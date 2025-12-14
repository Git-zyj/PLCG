#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2228344201261435962LL;
unsigned char var_9 = (unsigned char)66;
unsigned int var_10 = 70503193U;
long long int var_11 = 4756270998318210814LL;
long long int var_16 = -8701328400599370604LL;
int zero = 0;
long long int var_17 = -9128873662083512070LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
