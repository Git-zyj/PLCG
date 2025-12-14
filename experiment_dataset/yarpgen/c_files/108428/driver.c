#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1455911099;
short var_6 = (short)2568;
unsigned short var_7 = (unsigned short)50969;
unsigned char var_10 = (unsigned char)215;
short var_11 = (short)1351;
unsigned char var_13 = (unsigned char)128;
int zero = 0;
short var_15 = (short)-27483;
unsigned long long int var_16 = 16601802000823025525ULL;
short var_17 = (short)22284;
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
