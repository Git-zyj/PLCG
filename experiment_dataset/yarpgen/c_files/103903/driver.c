#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19171;
signed char var_3 = (signed char)-78;
unsigned int var_4 = 2500492025U;
unsigned short var_5 = (unsigned short)61865;
short var_8 = (short)6968;
short var_10 = (short)-3366;
int var_12 = 1031250793;
int zero = 0;
unsigned short var_13 = (unsigned short)9740;
short var_14 = (short)28762;
unsigned int var_15 = 2994309728U;
unsigned char var_16 = (unsigned char)126;
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
