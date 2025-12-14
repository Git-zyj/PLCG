#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29976;
unsigned short var_2 = (unsigned short)8770;
unsigned int var_4 = 3177775871U;
int var_7 = -2077013652;
unsigned int var_8 = 203992704U;
short var_9 = (short)8149;
int zero = 0;
short var_10 = (short)-25017;
unsigned long long int var_11 = 15269735695224799752ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
