#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1407;
short var_2 = (short)14804;
short var_3 = (short)-7538;
unsigned char var_5 = (unsigned char)232;
int zero = 0;
unsigned int var_11 = 3844899492U;
long long int var_12 = -2018884689634257047LL;
short var_13 = (short)-18637;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
