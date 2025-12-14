#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-248;
short var_2 = (short)-18256;
unsigned long long int var_3 = 2347986465811314817ULL;
unsigned long long int var_6 = 9208175457462028731ULL;
unsigned long long int var_7 = 13044272817492880782ULL;
unsigned long long int var_8 = 6814008440212848830ULL;
int zero = 0;
int var_11 = 1084496292;
unsigned long long int var_12 = 2520397635381293813ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
