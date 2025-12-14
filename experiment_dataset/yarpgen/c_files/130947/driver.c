#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13815;
signed char var_4 = (signed char)24;
signed char var_6 = (signed char)-95;
unsigned long long int var_7 = 9239428225335996850ULL;
unsigned long long int var_8 = 9367357747287417909ULL;
int zero = 0;
unsigned long long int var_10 = 1850671852015434166ULL;
signed char var_11 = (signed char)52;
unsigned short var_12 = (unsigned short)19934;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
