#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13831;
unsigned short var_4 = (unsigned short)59574;
unsigned long long int var_5 = 11744766599791283179ULL;
unsigned char var_8 = (unsigned char)123;
unsigned int var_9 = 1034673635U;
unsigned char var_18 = (unsigned char)57;
unsigned int var_19 = 415223483U;
int zero = 0;
unsigned short var_20 = (unsigned short)47782;
short var_21 = (short)15271;
unsigned short var_22 = (unsigned short)11068;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
