#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_1 = (signed char)-1;
int var_2 = 341033993;
int var_7 = -2013994329;
unsigned char var_11 = (unsigned char)233;
short var_14 = (short)5967;
int zero = 0;
int var_16 = 803739124;
unsigned char var_17 = (unsigned char)32;
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
