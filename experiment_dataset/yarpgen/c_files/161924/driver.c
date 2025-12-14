#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1203571918;
unsigned short var_5 = (unsigned short)41341;
unsigned char var_10 = (unsigned char)4;
short var_14 = (short)1322;
long long int var_15 = -5572312871467528731LL;
int zero = 0;
unsigned int var_16 = 1176190341U;
signed char var_17 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
