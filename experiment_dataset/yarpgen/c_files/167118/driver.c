#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned char var_8 = (unsigned char)63;
unsigned long long int var_9 = 8938946744124340446ULL;
unsigned char var_11 = (unsigned char)67;
signed char var_14 = (signed char)-126;
int zero = 0;
short var_15 = (short)-1222;
unsigned char var_16 = (unsigned char)107;
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
