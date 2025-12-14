#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2396142306U;
signed char var_6 = (signed char)107;
unsigned int var_8 = 3867855860U;
int zero = 0;
unsigned long long int var_10 = 9368161675688580007ULL;
long long int var_11 = 8858998203021072156LL;
unsigned int var_12 = 3861149736U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
