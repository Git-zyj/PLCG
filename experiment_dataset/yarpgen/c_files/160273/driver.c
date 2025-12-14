#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8091;
unsigned long long int var_7 = 18336113489715196131ULL;
unsigned char var_10 = (unsigned char)200;
signed char var_15 = (signed char)30;
int zero = 0;
signed char var_16 = (signed char)-38;
unsigned long long int var_17 = 761977769778069886ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
