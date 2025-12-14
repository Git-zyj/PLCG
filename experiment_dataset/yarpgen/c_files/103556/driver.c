#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
short var_2 = (short)-27811;
short var_4 = (short)8926;
short var_5 = (short)31458;
short var_7 = (short)12492;
unsigned char var_8 = (unsigned char)8;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
int var_19 = 1213863227;
unsigned char var_20 = (unsigned char)107;
short var_21 = (short)-3752;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
