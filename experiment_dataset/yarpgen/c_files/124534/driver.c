#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1145;
int var_4 = -1771209302;
unsigned short var_5 = (unsigned short)35396;
unsigned short var_8 = (unsigned short)53211;
int zero = 0;
unsigned long long int var_11 = 13595435986198935046ULL;
unsigned char var_12 = (unsigned char)165;
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
