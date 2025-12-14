#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60855;
int var_2 = -1695204182;
unsigned long long int var_4 = 15444319631211391472ULL;
unsigned char var_6 = (unsigned char)179;
unsigned char var_11 = (unsigned char)223;
int zero = 0;
unsigned short var_12 = (unsigned short)30122;
int var_13 = -751676476;
unsigned long long int var_14 = 14069270311875226483ULL;
void init() {
}

void checksum() {
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
