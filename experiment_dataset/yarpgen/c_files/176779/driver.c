#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29826;
unsigned char var_1 = (unsigned char)73;
short var_2 = (short)14666;
unsigned char var_7 = (unsigned char)81;
int var_9 = -1958084756;
unsigned int var_10 = 2133323076U;
int zero = 0;
short var_11 = (short)-14883;
short var_12 = (short)-24912;
short var_13 = (short)-28962;
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
