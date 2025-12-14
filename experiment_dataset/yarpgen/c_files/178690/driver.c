#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7870;
unsigned int var_8 = 1081927084U;
short var_9 = (short)-7239;
signed char var_10 = (signed char)82;
signed char var_11 = (signed char)104;
int zero = 0;
signed char var_16 = (signed char)-2;
unsigned long long int var_17 = 7604669807430871512ULL;
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
