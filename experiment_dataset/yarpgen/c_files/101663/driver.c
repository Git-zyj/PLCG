#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)199;
int var_4 = -1896696695;
int var_5 = 96138840;
signed char var_11 = (signed char)33;
int zero = 0;
short var_13 = (short)-29402;
signed char var_14 = (signed char)94;
unsigned long long int var_15 = 6700393668988995398ULL;
unsigned int var_16 = 2280359841U;
unsigned int var_17 = 4097409380U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
