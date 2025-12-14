#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57109;
int var_6 = -876649361;
unsigned int var_7 = 2532889420U;
signed char var_8 = (signed char)67;
unsigned int var_9 = 2131105178U;
short var_11 = (short)-17984;
unsigned short var_12 = (unsigned short)4860;
int zero = 0;
signed char var_13 = (signed char)-61;
short var_14 = (short)-17613;
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
