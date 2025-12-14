#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned char var_1 = (unsigned char)89;
short var_2 = (short)-14664;
unsigned short var_3 = (unsigned short)38535;
unsigned int var_6 = 1250709571U;
unsigned char var_9 = (unsigned char)175;
int zero = 0;
unsigned long long int var_11 = 7170447024228155891ULL;
int var_12 = 2144951679;
short var_13 = (short)-27120;
short var_14 = (short)17243;
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
