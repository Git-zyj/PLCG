#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28868;
unsigned int var_12 = 4294714098U;
unsigned char var_13 = (unsigned char)131;
unsigned int var_16 = 1723727834U;
unsigned char var_18 = (unsigned char)164;
int zero = 0;
unsigned short var_19 = (unsigned short)16482;
unsigned short var_20 = (unsigned short)28418;
unsigned short var_21 = (unsigned short)28073;
unsigned short var_22 = (unsigned short)63793;
unsigned int var_23 = 422869647U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
