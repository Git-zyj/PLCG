#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -398910914575675443LL;
unsigned char var_1 = (unsigned char)254;
unsigned short var_2 = (unsigned short)58111;
signed char var_3 = (signed char)4;
long long int var_7 = 1903189826308869980LL;
unsigned short var_8 = (unsigned short)37588;
long long int var_11 = -3280895909164020473LL;
int zero = 0;
unsigned short var_13 = (unsigned short)41025;
unsigned char var_14 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
