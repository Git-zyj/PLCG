#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5610;
unsigned int var_2 = 2858203982U;
signed char var_7 = (signed char)97;
unsigned char var_8 = (unsigned char)252;
signed char var_10 = (signed char)47;
int zero = 0;
unsigned short var_12 = (unsigned short)12375;
unsigned char var_13 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
