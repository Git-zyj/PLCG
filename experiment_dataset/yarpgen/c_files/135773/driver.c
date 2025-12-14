#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5126;
unsigned char var_6 = (unsigned char)194;
unsigned long long int var_8 = 14765117895664763537ULL;
short var_10 = (short)-16202;
unsigned int var_14 = 4207447183U;
unsigned long long int var_15 = 2497249928630753268ULL;
short var_16 = (short)15082;
int zero = 0;
short var_17 = (short)12154;
short var_18 = (short)-5312;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
