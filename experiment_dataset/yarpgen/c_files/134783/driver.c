#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_1 = -8431808723416257787LL;
unsigned short var_3 = (unsigned short)10303;
unsigned char var_4 = (unsigned char)20;
signed char var_7 = (signed char)112;
unsigned int var_10 = 735839894U;
int zero = 0;
unsigned int var_11 = 2106044216U;
signed char var_12 = (signed char)-124;
int var_13 = -304727;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
