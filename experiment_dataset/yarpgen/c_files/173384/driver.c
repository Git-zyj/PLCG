#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-15966;
signed char var_6 = (signed char)125;
signed char var_9 = (signed char)-115;
long long int var_12 = -5362373126234725829LL;
long long int var_16 = 7625943277565157016LL;
unsigned short var_17 = (unsigned short)6711;
int zero = 0;
unsigned long long int var_18 = 13964300943451546625ULL;
long long int var_19 = -3372953080259360780LL;
unsigned long long int var_20 = 14508418346393712344ULL;
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
