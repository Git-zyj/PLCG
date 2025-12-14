#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11268;
unsigned char var_6 = (unsigned char)64;
signed char var_10 = (signed char)100;
int zero = 0;
long long int var_12 = -6811163323140295756LL;
unsigned int var_13 = 3237410233U;
short var_14 = (short)17968;
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
