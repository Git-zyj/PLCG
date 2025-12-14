#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3211;
unsigned int var_4 = 652139046U;
unsigned char var_5 = (unsigned char)83;
unsigned short var_7 = (unsigned short)34562;
short var_8 = (short)11080;
signed char var_9 = (signed char)-21;
unsigned long long int var_10 = 15208026442196600926ULL;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
short var_14 = (short)-32149;
unsigned int var_15 = 3264469128U;
unsigned char var_16 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
