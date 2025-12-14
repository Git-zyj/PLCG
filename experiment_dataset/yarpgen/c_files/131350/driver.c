#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned short var_1 = (unsigned short)11073;
unsigned short var_4 = (unsigned short)5172;
unsigned int var_6 = 4141190628U;
unsigned char var_7 = (unsigned char)77;
unsigned short var_8 = (unsigned short)13554;
unsigned int var_9 = 2824019086U;
unsigned short var_11 = (unsigned short)6708;
unsigned int var_12 = 1217923034U;
signed char var_13 = (signed char)-23;
int zero = 0;
int var_18 = -15210204;
long long int var_19 = 9209126108718064185LL;
long long int var_20 = 8048231957966157368LL;
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
