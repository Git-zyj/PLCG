#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -309381106;
signed char var_1 = (signed char)-99;
signed char var_2 = (signed char)2;
unsigned char var_7 = (unsigned char)107;
unsigned char var_8 = (unsigned char)167;
unsigned short var_9 = (unsigned short)27291;
short var_10 = (short)-29761;
int zero = 0;
short var_15 = (short)7338;
unsigned long long int var_16 = 9842819453117129216ULL;
unsigned long long int var_17 = 1481298880849512859ULL;
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
