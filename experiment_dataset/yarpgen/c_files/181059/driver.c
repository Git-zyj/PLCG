#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
unsigned int var_4 = 1247506647U;
short var_5 = (short)12254;
signed char var_10 = (signed char)-3;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
int var_17 = -112392166;
unsigned short var_18 = (unsigned short)61078;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
