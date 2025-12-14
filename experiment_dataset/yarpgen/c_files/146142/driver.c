#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned long long int var_3 = 1739170683757648642ULL;
long long int var_4 = 6730957149853985601LL;
short var_7 = (short)-28933;
unsigned short var_8 = (unsigned short)7245;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
signed char var_13 = (signed char)115;
int var_14 = -1449487347;
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
