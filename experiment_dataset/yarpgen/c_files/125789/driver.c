#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1900;
unsigned char var_4 = (unsigned char)227;
short var_11 = (short)22218;
short var_17 = (short)-17940;
int zero = 0;
signed char var_19 = (signed char)-48;
unsigned short var_20 = (unsigned short)28074;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
