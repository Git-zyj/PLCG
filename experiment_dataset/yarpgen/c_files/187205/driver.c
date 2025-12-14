#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12663;
signed char var_7 = (signed char)-85;
unsigned char var_8 = (unsigned char)30;
unsigned int var_10 = 2060692590U;
unsigned short var_12 = (unsigned short)19903;
short var_13 = (short)-23074;
int zero = 0;
short var_19 = (short)14444;
short var_20 = (short)27402;
signed char var_21 = (signed char)-111;
void init() {
}

void checksum() {
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
