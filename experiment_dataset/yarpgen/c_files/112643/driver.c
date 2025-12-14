#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1325350631685881344ULL;
unsigned char var_4 = (unsigned char)28;
int zero = 0;
unsigned short var_12 = (unsigned short)1553;
short var_13 = (short)-32643;
int var_14 = -775527352;
unsigned char var_15 = (unsigned char)28;
long long int var_16 = -4023152092695590451LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
