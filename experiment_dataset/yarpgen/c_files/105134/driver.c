#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-46;
unsigned char var_8 = (unsigned char)65;
int var_13 = -2055615461;
unsigned int var_15 = 2613249345U;
int zero = 0;
unsigned short var_18 = (unsigned short)64372;
int var_19 = 1261191401;
unsigned long long int var_20 = 7417209768725731250ULL;
unsigned short var_21 = (unsigned short)46852;
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
