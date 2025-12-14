#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)129;
unsigned long long int var_7 = 16760065974099581161ULL;
unsigned char var_8 = (unsigned char)142;
short var_10 = (short)25653;
unsigned long long int var_12 = 12149738708510926135ULL;
short var_16 = (short)-10632;
int zero = 0;
unsigned int var_20 = 2032391697U;
signed char var_21 = (signed char)-38;
short var_22 = (short)29924;
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
