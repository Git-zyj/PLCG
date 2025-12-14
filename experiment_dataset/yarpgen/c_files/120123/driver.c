#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9752080933976995632ULL;
unsigned long long int var_7 = 1447932063854222128ULL;
unsigned long long int var_8 = 8347419702384523387ULL;
long long int var_12 = -7888313622290029887LL;
int zero = 0;
unsigned long long int var_14 = 701426533995734119ULL;
unsigned short var_15 = (unsigned short)44715;
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
