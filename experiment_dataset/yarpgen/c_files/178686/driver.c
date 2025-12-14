#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)232;
signed char var_6 = (signed char)61;
short var_7 = (short)-28393;
int zero = 0;
unsigned short var_20 = (unsigned short)22465;
signed char var_21 = (signed char)59;
unsigned short var_22 = (unsigned short)61080;
int var_23 = -102271920;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
