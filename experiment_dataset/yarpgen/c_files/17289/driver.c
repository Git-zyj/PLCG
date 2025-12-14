#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18194754279824312912ULL;
signed char var_2 = (signed char)-2;
unsigned short var_4 = (unsigned short)14149;
unsigned int var_6 = 1148975564U;
unsigned short var_7 = (unsigned short)18189;
unsigned short var_8 = (unsigned short)33602;
int zero = 0;
unsigned int var_14 = 1118971327U;
signed char var_15 = (signed char)27;
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
