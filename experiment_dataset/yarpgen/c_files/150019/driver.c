#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
unsigned short var_2 = (unsigned short)11499;
unsigned int var_3 = 3926087066U;
unsigned char var_8 = (unsigned char)227;
signed char var_10 = (signed char)20;
unsigned short var_11 = (unsigned short)9046;
int zero = 0;
short var_13 = (short)11611;
short var_14 = (short)3972;
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
