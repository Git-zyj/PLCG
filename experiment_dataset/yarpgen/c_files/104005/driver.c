#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18407;
int var_3 = 1761659261;
unsigned char var_5 = (unsigned char)72;
unsigned short var_6 = (unsigned short)15873;
long long int var_8 = -855887225082661311LL;
unsigned char var_11 = (unsigned char)155;
unsigned int var_13 = 3589781630U;
unsigned short var_16 = (unsigned short)15663;
long long int var_19 = 1039605054477809980LL;
int zero = 0;
long long int var_20 = -5464049459208941881LL;
unsigned char var_21 = (unsigned char)170;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
