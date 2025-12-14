#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
unsigned char var_2 = (unsigned char)100;
unsigned char var_4 = (unsigned char)157;
long long int var_5 = -7252346395919298267LL;
int zero = 0;
unsigned char var_10 = (unsigned char)44;
short var_11 = (short)-26102;
unsigned int var_12 = 4214555067U;
unsigned short var_13 = (unsigned short)962;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
