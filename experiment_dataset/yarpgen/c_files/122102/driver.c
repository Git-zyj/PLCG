#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2126331116U;
unsigned long long int var_2 = 9506570111804465546ULL;
unsigned short var_3 = (unsigned short)34997;
unsigned long long int var_4 = 6346805787067726903ULL;
unsigned short var_5 = (unsigned short)24268;
unsigned long long int var_7 = 12905190415196309485ULL;
signed char var_9 = (signed char)12;
int zero = 0;
unsigned short var_11 = (unsigned short)17469;
unsigned char var_12 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
