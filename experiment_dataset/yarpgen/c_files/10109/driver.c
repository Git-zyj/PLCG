#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
short var_4 = (short)20271;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1932668241U;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)58793;
unsigned short var_11 = (unsigned short)65531;
int zero = 0;
int var_12 = -1551275709;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
