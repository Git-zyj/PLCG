#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27872;
short var_7 = (short)-23053;
signed char var_8 = (signed char)0;
int var_11 = 25441792;
signed char var_13 = (signed char)-54;
int var_15 = -13605026;
int zero = 0;
unsigned int var_17 = 3092098477U;
int var_18 = 1555067005;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
