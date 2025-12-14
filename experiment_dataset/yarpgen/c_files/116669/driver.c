#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
signed char var_10 = (signed char)68;
unsigned int var_11 = 4006144075U;
unsigned char var_12 = (unsigned char)190;
unsigned long long int var_13 = 14300963458658293180ULL;
unsigned char var_15 = (unsigned char)23;
unsigned long long int var_17 = 6966728062128389399ULL;
int zero = 0;
unsigned long long int var_19 = 15677192777277066665ULL;
int var_20 = 587660603;
unsigned char var_21 = (unsigned char)156;
signed char var_22 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
