#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23521;
signed char var_6 = (signed char)-67;
signed char var_8 = (signed char)-28;
int var_14 = -833472356;
int zero = 0;
short var_17 = (short)12037;
short var_18 = (short)14643;
int var_19 = -195221073;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
