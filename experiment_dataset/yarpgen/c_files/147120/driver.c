#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2543641529U;
unsigned int var_3 = 4274227152U;
unsigned int var_4 = 3469297735U;
unsigned long long int var_5 = 15754262483160636824ULL;
unsigned short var_7 = (unsigned short)3514;
unsigned short var_9 = (unsigned short)15267;
unsigned long long int var_11 = 3033386080652654789ULL;
int zero = 0;
unsigned int var_13 = 4230087478U;
unsigned int var_14 = 1578911490U;
unsigned int var_15 = 2795639797U;
unsigned long long int var_16 = 1333358774112940421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
