#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 735538437U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-108;
int var_15 = 1481642969;
int zero = 0;
unsigned int var_20 = 329503567U;
short var_21 = (short)20653;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
