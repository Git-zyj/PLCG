#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3260002942U;
unsigned long long int var_3 = 16081211595129203332ULL;
short var_5 = (short)-6092;
unsigned int var_8 = 1928644364U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)5790;
int zero = 0;
int var_13 = 805011588;
unsigned short var_14 = (unsigned short)29782;
short var_15 = (short)-12654;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
