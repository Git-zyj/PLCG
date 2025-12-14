#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
unsigned char var_1 = (unsigned char)193;
unsigned char var_2 = (unsigned char)105;
unsigned char var_4 = (unsigned char)33;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6562595958894759546ULL;
unsigned long long int var_9 = 16087248945679890783ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)153;
unsigned char var_12 = (unsigned char)12;
short var_13 = (short)3369;
int var_14 = 1643583899;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
