#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65301;
unsigned char var_2 = (unsigned char)85;
unsigned short var_3 = (unsigned short)48218;
unsigned short var_5 = (unsigned short)37661;
unsigned char var_7 = (unsigned char)238;
unsigned char var_8 = (unsigned char)40;
unsigned short var_9 = (unsigned short)6669;
int zero = 0;
short var_10 = (short)-5980;
unsigned char var_11 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
