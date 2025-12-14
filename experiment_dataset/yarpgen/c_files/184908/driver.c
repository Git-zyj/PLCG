#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11094;
signed char var_4 = (signed char)-94;
unsigned char var_5 = (unsigned char)54;
unsigned short var_6 = (unsigned short)49859;
unsigned char var_8 = (unsigned char)231;
int zero = 0;
int var_17 = 1641289675;
signed char var_18 = (signed char)60;
short var_19 = (short)12744;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
