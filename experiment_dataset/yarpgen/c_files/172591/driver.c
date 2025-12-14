#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned short var_5 = (unsigned short)16691;
unsigned int var_8 = 1672840033U;
unsigned long long int var_10 = 3232082460677855820ULL;
unsigned int var_12 = 801254473U;
unsigned char var_13 = (unsigned char)20;
int var_15 = -578346804;
unsigned int var_16 = 3361900462U;
unsigned int var_17 = 2826830675U;
unsigned char var_18 = (unsigned char)169;
int zero = 0;
unsigned int var_19 = 628432423U;
unsigned int var_20 = 810443600U;
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
