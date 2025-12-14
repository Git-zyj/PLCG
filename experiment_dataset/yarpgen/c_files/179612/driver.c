#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13047;
signed char var_1 = (signed char)11;
unsigned short var_2 = (unsigned short)14682;
unsigned short var_3 = (unsigned short)4717;
unsigned int var_5 = 2650799021U;
unsigned int var_6 = 793198534U;
unsigned long long int var_13 = 16565009529364073728ULL;
int zero = 0;
unsigned int var_14 = 3822632824U;
unsigned char var_15 = (unsigned char)55;
unsigned short var_16 = (unsigned short)65066;
short var_17 = (short)-172;
void init() {
}

void checksum() {
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
