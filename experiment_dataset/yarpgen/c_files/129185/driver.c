#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
int var_2 = -1562297552;
unsigned long long int var_3 = 4916857740296955927ULL;
short var_6 = (short)24417;
unsigned short var_7 = (unsigned short)34280;
int zero = 0;
unsigned char var_10 = (unsigned char)230;
unsigned long long int var_11 = 649777756628897569ULL;
unsigned char var_12 = (unsigned char)119;
long long int var_13 = -5091046948723562706LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
