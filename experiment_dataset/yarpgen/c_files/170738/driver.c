#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19034;
unsigned long long int var_6 = 9229074518822110855ULL;
short var_8 = (short)15221;
int zero = 0;
unsigned short var_15 = (unsigned short)6018;
int var_16 = -1786941447;
signed char var_17 = (signed char)-33;
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
