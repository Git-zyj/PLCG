#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3196166735U;
unsigned short var_4 = (unsigned short)64686;
signed char var_6 = (signed char)-46;
unsigned short var_7 = (unsigned short)7021;
int zero = 0;
int var_11 = 352143706;
unsigned short var_12 = (unsigned short)21250;
signed char var_13 = (signed char)12;
unsigned short var_14 = (unsigned short)10415;
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
