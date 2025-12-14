#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2542610474U;
unsigned int var_10 = 3354954043U;
unsigned int var_13 = 2469835629U;
signed char var_16 = (signed char)106;
int zero = 0;
unsigned int var_17 = 2130727394U;
unsigned long long int var_18 = 6241390236835029690ULL;
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
