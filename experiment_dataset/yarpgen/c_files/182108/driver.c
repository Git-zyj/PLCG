#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned long long int var_3 = 10488216721269551391ULL;
unsigned long long int var_6 = 618777576470328807ULL;
unsigned long long int var_8 = 9449070223841286839ULL;
signed char var_10 = (signed char)99;
unsigned char var_11 = (unsigned char)106;
unsigned short var_12 = (unsigned short)9620;
unsigned int var_17 = 1988304476U;
int zero = 0;
unsigned short var_18 = (unsigned short)19083;
unsigned long long int var_19 = 4863327745747762855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
