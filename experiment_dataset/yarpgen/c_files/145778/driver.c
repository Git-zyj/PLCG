#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
int var_1 = -868760501;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)56;
signed char var_8 = (signed char)55;
signed char var_10 = (signed char)-114;
short var_11 = (short)3694;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1886417036;
unsigned short var_16 = (unsigned short)50078;
void init() {
}

void checksum() {
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
