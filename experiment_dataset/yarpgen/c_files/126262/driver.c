#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
_Bool var_2 = (_Bool)0;
unsigned int var_11 = 1015436497U;
unsigned long long int var_12 = 6639795668065106012ULL;
int zero = 0;
unsigned int var_13 = 1013035902U;
short var_14 = (short)-15405;
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
