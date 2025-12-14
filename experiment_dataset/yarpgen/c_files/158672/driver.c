#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12588;
unsigned int var_3 = 1925349953U;
int var_5 = -1424896567;
unsigned short var_7 = (unsigned short)46417;
unsigned int var_8 = 1941498467U;
unsigned int var_9 = 108968139U;
unsigned short var_11 = (unsigned short)7606;
int zero = 0;
unsigned short var_12 = (unsigned short)2865;
unsigned char var_13 = (unsigned char)16;
int var_14 = -2023467141;
short var_15 = (short)9622;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
