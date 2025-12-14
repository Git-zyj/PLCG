#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11777;
unsigned char var_3 = (unsigned char)162;
unsigned char var_5 = (unsigned char)11;
unsigned char var_6 = (unsigned char)215;
long long int var_13 = 5975914416331170165LL;
short var_15 = (short)1961;
int zero = 0;
unsigned short var_16 = (unsigned short)56460;
unsigned int var_17 = 936235149U;
short var_18 = (short)-21832;
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
