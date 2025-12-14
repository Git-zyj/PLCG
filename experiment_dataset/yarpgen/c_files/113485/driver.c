#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
unsigned short var_2 = (unsigned short)29988;
int var_3 = 2038475287;
unsigned long long int var_5 = 4244861738357554564ULL;
unsigned short var_6 = (unsigned short)21634;
unsigned int var_8 = 1142893755U;
int var_9 = 1560060484;
unsigned long long int var_10 = 1079583575715492525ULL;
unsigned int var_11 = 4173133861U;
unsigned int var_12 = 1873422724U;
int zero = 0;
unsigned char var_13 = (unsigned char)74;
unsigned char var_14 = (unsigned char)169;
unsigned int var_15 = 3547185097U;
void init() {
}

void checksum() {
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
