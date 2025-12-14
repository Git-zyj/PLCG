#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7715;
signed char var_2 = (signed char)99;
short var_3 = (short)-27090;
unsigned int var_4 = 2812713237U;
signed char var_5 = (signed char)39;
unsigned short var_6 = (unsigned short)35935;
unsigned int var_9 = 3821042136U;
unsigned short var_11 = (unsigned short)40623;
int zero = 0;
unsigned short var_18 = (unsigned short)49045;
unsigned short var_19 = (unsigned short)2262;
signed char var_20 = (signed char)110;
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
