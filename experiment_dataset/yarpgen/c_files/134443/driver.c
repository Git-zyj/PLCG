#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 11529212U;
unsigned long long int var_2 = 17420743340454845156ULL;
unsigned int var_12 = 715728077U;
int zero = 0;
unsigned short var_13 = (unsigned short)18510;
int var_14 = -26281531;
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
