#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2052414908;
int var_1 = -2029969794;
int var_2 = -1274259055;
short var_4 = (short)2966;
short var_6 = (short)6061;
short var_8 = (short)-7851;
int var_11 = -143266495;
int zero = 0;
int var_12 = -894858577;
int var_13 = -1497251989;
int var_14 = 1286872279;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
