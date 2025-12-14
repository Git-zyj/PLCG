#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2142572363;
unsigned short var_6 = (unsigned short)53370;
int var_7 = 668844040;
int var_12 = -1682084369;
int var_13 = -1907470225;
unsigned short var_14 = (unsigned short)55416;
short var_15 = (short)-22217;
int zero = 0;
int var_18 = -1038589754;
unsigned char var_19 = (unsigned char)41;
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
