#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 16151642;
short var_1 = (short)-28852;
int var_4 = 2143631420;
unsigned short var_5 = (unsigned short)13886;
signed char var_8 = (signed char)-127;
int zero = 0;
short var_15 = (short)-8653;
unsigned int var_16 = 699703792U;
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
