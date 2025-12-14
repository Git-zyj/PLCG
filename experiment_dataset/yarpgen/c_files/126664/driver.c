#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
long long int var_10 = -542352652557974508LL;
int var_11 = -982104314;
unsigned int var_13 = 2704679311U;
int zero = 0;
long long int var_17 = -9045772096772462885LL;
signed char var_18 = (signed char)-73;
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
