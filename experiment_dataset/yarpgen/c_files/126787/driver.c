#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6292;
unsigned short var_4 = (unsigned short)11778;
unsigned long long int var_10 = 14500552255183773338ULL;
int zero = 0;
signed char var_12 = (signed char)-64;
unsigned long long int var_13 = 15703710705845016158ULL;
unsigned char var_14 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
