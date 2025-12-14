#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7919226877836180191LL;
unsigned int var_3 = 3084073501U;
unsigned long long int var_10 = 319159852818532198ULL;
int zero = 0;
long long int var_11 = 859227719906285824LL;
unsigned long long int var_12 = 2950824569103932547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
