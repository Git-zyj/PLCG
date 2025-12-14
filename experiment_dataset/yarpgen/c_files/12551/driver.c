#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 103577528U;
unsigned char var_3 = (unsigned char)42;
unsigned char var_5 = (unsigned char)29;
unsigned int var_7 = 3153794392U;
unsigned char var_9 = (unsigned char)147;
unsigned int var_10 = 3798607243U;
unsigned long long int var_12 = 6894161788018915589ULL;
unsigned char var_15 = (unsigned char)242;
unsigned int var_18 = 4196594378U;
int zero = 0;
unsigned int var_19 = 1833960702U;
unsigned char var_20 = (unsigned char)6;
unsigned int var_21 = 57581982U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
