#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)22648;
long long int var_10 = 7522366577973624855LL;
int zero = 0;
unsigned long long int var_11 = 2752514665037446902ULL;
unsigned short var_12 = (unsigned short)43932;
unsigned short var_13 = (unsigned short)25960;
short var_14 = (short)-589;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
