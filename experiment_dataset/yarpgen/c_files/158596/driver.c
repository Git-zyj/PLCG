#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-87;
unsigned int var_5 = 2667475035U;
short var_7 = (short)-9542;
unsigned long long int var_8 = 7556180254318227526ULL;
signed char var_9 = (signed char)8;
unsigned short var_10 = (unsigned short)59498;
int zero = 0;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)119;
int var_15 = 1604561637;
unsigned int var_16 = 3757808159U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
