#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17357788474115871480ULL;
unsigned short var_6 = (unsigned short)19398;
int zero = 0;
unsigned long long int var_20 = 17903505026286520814ULL;
int var_21 = 1748081989;
unsigned long long int var_22 = 17575844432466568939ULL;
signed char var_23 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
