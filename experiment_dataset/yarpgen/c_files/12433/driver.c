#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 313108060U;
unsigned int var_4 = 4140338182U;
unsigned int var_7 = 933111556U;
int zero = 0;
unsigned int var_14 = 1773950770U;
unsigned int var_15 = 2489476724U;
void init() {
}

void checksum() {
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
