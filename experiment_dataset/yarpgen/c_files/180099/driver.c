#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12201;
unsigned char var_2 = (unsigned char)91;
int var_8 = -43051658;
unsigned char var_11 = (unsigned char)106;
int zero = 0;
int var_12 = -1368733819;
short var_13 = (short)-11865;
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
