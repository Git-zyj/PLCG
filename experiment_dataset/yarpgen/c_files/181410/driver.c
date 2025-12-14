#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27222;
signed char var_5 = (signed char)-92;
signed char var_11 = (signed char)75;
int zero = 0;
short var_13 = (short)30845;
signed char var_14 = (signed char)-27;
signed char var_15 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
