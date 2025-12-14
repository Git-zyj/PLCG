#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2740206914457608420ULL;
short var_1 = (short)-18129;
unsigned char var_2 = (unsigned char)13;
unsigned short var_3 = (unsigned short)37657;
int var_7 = 1426093612;
unsigned long long int var_8 = 5189173315177332138ULL;
unsigned int var_12 = 711514890U;
unsigned short var_13 = (unsigned short)55992;
signed char var_14 = (signed char)-53;
long long int var_17 = 6106816920840121494LL;
int zero = 0;
unsigned short var_18 = (unsigned short)21146;
unsigned int var_19 = 2709794214U;
unsigned char var_20 = (unsigned char)75;
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
