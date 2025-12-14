#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3790748997U;
short var_5 = (short)7048;
unsigned int var_6 = 3032306257U;
unsigned long long int var_8 = 10271633140979674450ULL;
unsigned int var_11 = 3298654601U;
signed char var_12 = (signed char)-13;
unsigned int var_13 = 836322902U;
int zero = 0;
short var_15 = (short)-3458;
short var_16 = (short)14576;
signed char var_17 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
