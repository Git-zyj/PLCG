#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
unsigned char var_3 = (unsigned char)79;
short var_11 = (short)-19247;
unsigned char var_14 = (unsigned char)157;
short var_17 = (short)17685;
int zero = 0;
unsigned short var_18 = (unsigned short)34338;
signed char var_19 = (signed char)0;
signed char var_20 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
