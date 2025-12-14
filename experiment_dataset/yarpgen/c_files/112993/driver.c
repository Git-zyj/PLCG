#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1444921169;
short var_4 = (short)-12758;
unsigned long long int var_5 = 14228955151409381889ULL;
signed char var_6 = (signed char)24;
int var_8 = 974475680;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_13 = 2627556779286745787ULL;
unsigned short var_14 = (unsigned short)4240;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
signed char var_16 = (signed char)90;
unsigned char var_17 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
