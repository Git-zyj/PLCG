#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4721;
signed char var_3 = (signed char)-4;
signed char var_8 = (signed char)54;
signed char var_9 = (signed char)78;
signed char var_10 = (signed char)-104;
unsigned char var_11 = (unsigned char)99;
short var_12 = (short)30097;
unsigned long long int var_14 = 10797225655746076014ULL;
unsigned short var_15 = (unsigned short)42338;
int var_17 = 2002160567;
int zero = 0;
short var_18 = (short)-9645;
int var_19 = -1624516045;
unsigned short var_20 = (unsigned short)49227;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
