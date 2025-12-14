#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6225364148755582247ULL;
signed char var_8 = (signed char)52;
int var_13 = 532889107;
int zero = 0;
unsigned short var_16 = (unsigned short)12188;
signed char var_17 = (signed char)-21;
int var_18 = 235060552;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
