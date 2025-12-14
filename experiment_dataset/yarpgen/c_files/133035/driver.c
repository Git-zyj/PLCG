#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4058625669U;
unsigned short var_3 = (unsigned short)14545;
unsigned char var_5 = (unsigned char)165;
unsigned int var_6 = 1342785503U;
long long int var_11 = 1775210255841265924LL;
unsigned char var_13 = (unsigned char)74;
int zero = 0;
unsigned char var_19 = (unsigned char)17;
unsigned char var_20 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
