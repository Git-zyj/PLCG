#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29449;
unsigned short var_5 = (unsigned short)24621;
short var_6 = (short)19961;
signed char var_7 = (signed char)70;
unsigned int var_9 = 3360658868U;
int zero = 0;
short var_13 = (short)-17663;
unsigned long long int var_14 = 2407301022124608661ULL;
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
