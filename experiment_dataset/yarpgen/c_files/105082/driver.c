#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned char var_2 = (unsigned char)58;
unsigned short var_3 = (unsigned short)21354;
signed char var_7 = (signed char)6;
signed char var_8 = (signed char)3;
unsigned char var_10 = (unsigned char)70;
int var_11 = -86173595;
short var_13 = (short)-8529;
short var_14 = (short)20421;
int zero = 0;
unsigned long long int var_15 = 3559924091352110814ULL;
unsigned short var_16 = (unsigned short)32534;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)13514;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
