#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_1 = 2555218092U;
short var_2 = (short)-7256;
signed char var_8 = (signed char)-106;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)74;
short var_14 = (short)1426;
int var_15 = -131199641;
unsigned int var_16 = 3777970252U;
unsigned int var_17 = 1570079418U;
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
