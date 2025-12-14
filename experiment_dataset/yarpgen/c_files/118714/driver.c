#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6536;
unsigned short var_1 = (unsigned short)63100;
unsigned long long int var_2 = 12730173535833071972ULL;
unsigned long long int var_3 = 17750218409745825340ULL;
unsigned long long int var_4 = 15602408954365356968ULL;
signed char var_7 = (signed char)55;
unsigned long long int var_9 = 8225931771285348319ULL;
int zero = 0;
short var_12 = (short)-4630;
signed char var_13 = (signed char)105;
unsigned short var_14 = (unsigned short)52067;
unsigned short var_15 = (unsigned short)23875;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
