#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4131;
unsigned short var_3 = (unsigned short)32464;
unsigned int var_4 = 3305853065U;
unsigned long long int var_6 = 18390899352520639370ULL;
unsigned char var_8 = (unsigned char)165;
unsigned int var_10 = 2160291272U;
int zero = 0;
unsigned char var_12 = (unsigned char)249;
unsigned short var_13 = (unsigned short)55822;
void init() {
}

void checksum() {
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
