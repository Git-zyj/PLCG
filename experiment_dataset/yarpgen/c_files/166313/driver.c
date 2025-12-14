#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1840799202;
signed char var_7 = (signed char)56;
unsigned long long int var_8 = 8375596707023225918ULL;
unsigned long long int var_11 = 12440674792224879852ULL;
int zero = 0;
short var_16 = (short)-3232;
int var_17 = -897277024;
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
