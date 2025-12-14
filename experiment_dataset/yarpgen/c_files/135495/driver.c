#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-18;
signed char var_7 = (signed char)-29;
unsigned long long int var_11 = 607206249344484689ULL;
unsigned char var_14 = (unsigned char)206;
unsigned int var_15 = 747184225U;
short var_19 = (short)22219;
int zero = 0;
short var_20 = (short)-26345;
unsigned short var_21 = (unsigned short)39257;
unsigned char var_22 = (unsigned char)197;
unsigned int var_23 = 1461387900U;
int var_24 = -753478275;
unsigned short var_25 = (unsigned short)12111;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
