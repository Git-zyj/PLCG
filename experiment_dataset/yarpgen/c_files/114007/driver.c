#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned char var_2 = (unsigned char)74;
int var_3 = 1386545382;
short var_14 = (short)-28604;
int zero = 0;
unsigned char var_20 = (unsigned char)112;
short var_21 = (short)-21729;
unsigned long long int var_22 = 9663413044573132612ULL;
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
