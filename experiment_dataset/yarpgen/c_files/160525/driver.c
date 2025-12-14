#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2503884497U;
unsigned char var_3 = (unsigned char)227;
unsigned char var_4 = (unsigned char)229;
unsigned short var_12 = (unsigned short)57430;
signed char var_16 = (signed char)95;
int zero = 0;
signed char var_20 = (signed char)-23;
long long int var_21 = 3827970861881745164LL;
signed char var_22 = (signed char)69;
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
