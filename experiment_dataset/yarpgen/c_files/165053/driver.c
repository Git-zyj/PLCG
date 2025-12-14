#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2479897255U;
unsigned short var_9 = (unsigned short)60066;
long long int var_12 = -4974460694844135376LL;
int zero = 0;
unsigned int var_14 = 185247189U;
int var_15 = 1269140560;
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
