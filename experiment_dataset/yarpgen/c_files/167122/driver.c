#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)1242;
short var_2 = (short)5910;
short var_3 = (short)-1755;
unsigned char var_4 = (unsigned char)186;
short var_7 = (short)7198;
int zero = 0;
unsigned char var_10 = (unsigned char)24;
unsigned int var_11 = 2862900591U;
unsigned char var_12 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
