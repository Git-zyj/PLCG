#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4810229792583610852ULL;
unsigned int var_10 = 3374707765U;
unsigned short var_11 = (unsigned short)65398;
int zero = 0;
unsigned int var_13 = 693035518U;
unsigned int var_14 = 818856976U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
