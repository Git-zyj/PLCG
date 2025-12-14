#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34786;
unsigned short var_4 = (unsigned short)27599;
unsigned long long int var_5 = 16573454911510404878ULL;
unsigned int var_7 = 4011168510U;
long long int var_11 = 4760801927520371207LL;
int zero = 0;
unsigned char var_13 = (unsigned char)4;
unsigned int var_14 = 1739556776U;
short var_15 = (short)-18451;
unsigned int var_16 = 3583749296U;
unsigned char var_17 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
