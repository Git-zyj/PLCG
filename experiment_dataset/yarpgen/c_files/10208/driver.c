#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3124;
unsigned int var_3 = 709957564U;
unsigned char var_5 = (unsigned char)207;
short var_7 = (short)18333;
unsigned char var_9 = (unsigned char)228;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
signed char var_11 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
