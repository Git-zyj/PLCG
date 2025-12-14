#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
int var_2 = 862511435;
short var_3 = (short)-23462;
int var_8 = -1044674256;
short var_12 = (short)-6727;
int zero = 0;
unsigned char var_13 = (unsigned char)159;
unsigned long long int var_14 = 11625524096698532469ULL;
unsigned char var_15 = (unsigned char)123;
unsigned short var_16 = (unsigned short)26152;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
