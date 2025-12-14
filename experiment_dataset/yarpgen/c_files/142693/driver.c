#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18419;
short var_6 = (short)-3137;
int var_7 = 1864999975;
int var_8 = -1463513317;
int var_10 = 1991714008;
signed char var_11 = (signed char)90;
int zero = 0;
int var_13 = 670983407;
unsigned long long int var_14 = 15041902209457434371ULL;
void init() {
}

void checksum() {
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
