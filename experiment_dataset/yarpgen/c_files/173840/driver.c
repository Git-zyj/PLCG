#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
short var_1 = (short)-16121;
unsigned int var_2 = 360136919U;
unsigned char var_4 = (unsigned char)103;
long long int var_5 = -5976368653976741120LL;
unsigned int var_7 = 3705119953U;
unsigned char var_12 = (unsigned char)172;
short var_13 = (short)21852;
unsigned char var_18 = (unsigned char)232;
int zero = 0;
long long int var_20 = 1249529739228491204LL;
short var_21 = (short)4226;
signed char var_22 = (signed char)-86;
short var_23 = (short)-23555;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
