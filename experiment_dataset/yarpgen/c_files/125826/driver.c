#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18894;
unsigned int var_3 = 1646542496U;
int var_5 = -372464934;
signed char var_6 = (signed char)-24;
int var_12 = -1038308467;
int zero = 0;
short var_14 = (short)77;
int var_15 = 1329186517;
int var_16 = 2076713606;
void init() {
}

void checksum() {
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
