#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12569576811131968231ULL;
signed char var_4 = (signed char)110;
short var_7 = (short)22136;
int var_8 = -294221686;
int var_10 = 1029067607;
unsigned char var_13 = (unsigned char)196;
int var_18 = 1790752886;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
unsigned short var_21 = (unsigned short)43907;
short var_22 = (short)-28553;
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
