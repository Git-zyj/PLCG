#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)17;
short var_4 = (short)-9318;
short var_8 = (short)-27513;
int zero = 0;
unsigned short var_13 = (unsigned short)16973;
unsigned short var_14 = (unsigned short)14522;
unsigned short var_15 = (unsigned short)8936;
unsigned short var_16 = (unsigned short)53247;
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
