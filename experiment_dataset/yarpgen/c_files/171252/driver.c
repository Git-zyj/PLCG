#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23603;
unsigned int var_6 = 926025325U;
short var_10 = (short)-27403;
short var_12 = (short)15623;
short var_13 = (short)8403;
short var_15 = (short)-21347;
unsigned int var_16 = 672034019U;
int zero = 0;
short var_19 = (short)23850;
unsigned char var_20 = (unsigned char)54;
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
