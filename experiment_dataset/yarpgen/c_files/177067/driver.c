#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned char var_3 = (unsigned char)55;
unsigned char var_6 = (unsigned char)236;
unsigned long long int var_8 = 17674305993445786886ULL;
short var_12 = (short)12012;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
short var_14 = (short)12859;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
