#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1676634704U;
unsigned short var_1 = (unsigned short)54771;
unsigned int var_3 = 4084777539U;
unsigned char var_6 = (unsigned char)34;
unsigned char var_7 = (unsigned char)35;
signed char var_10 = (signed char)-119;
short var_12 = (short)11608;
int zero = 0;
signed char var_14 = (signed char)-30;
short var_15 = (short)-4236;
unsigned long long int var_16 = 290181626770732343ULL;
unsigned long long int var_17 = 14825900797385110575ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
