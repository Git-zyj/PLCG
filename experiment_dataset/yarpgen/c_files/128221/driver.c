#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3350606303U;
unsigned char var_1 = (unsigned char)40;
unsigned short var_2 = (unsigned short)43465;
signed char var_7 = (signed char)-86;
short var_14 = (short)-30853;
unsigned short var_17 = (unsigned short)1714;
int zero = 0;
signed char var_20 = (signed char)42;
long long int var_21 = -3814162504019049316LL;
unsigned char var_22 = (unsigned char)119;
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
