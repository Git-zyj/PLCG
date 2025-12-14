#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3524543123U;
int var_3 = 91610869;
long long int var_7 = 6698932140401102554LL;
unsigned int var_9 = 1336923995U;
signed char var_12 = (signed char)123;
int zero = 0;
unsigned long long int var_13 = 7929773377872609679ULL;
signed char var_14 = (signed char)60;
unsigned long long int var_15 = 1917323535717248865ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
