#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17785;
unsigned char var_1 = (unsigned char)154;
signed char var_6 = (signed char)47;
signed char var_10 = (signed char)-122;
signed char var_11 = (signed char)86;
signed char var_12 = (signed char)16;
int zero = 0;
unsigned char var_15 = (unsigned char)214;
int var_16 = -430145057;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
