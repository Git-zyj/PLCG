#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57524;
unsigned char var_3 = (unsigned char)248;
short var_4 = (short)-14995;
unsigned long long int var_12 = 14683620645503043462ULL;
unsigned int var_13 = 1261716639U;
unsigned short var_14 = (unsigned short)49328;
int zero = 0;
unsigned char var_15 = (unsigned char)167;
signed char var_16 = (signed char)-64;
void init() {
}

void checksum() {
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
