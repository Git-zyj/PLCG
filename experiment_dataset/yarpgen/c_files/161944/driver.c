#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1298864623;
unsigned char var_8 = (unsigned char)105;
unsigned long long int var_11 = 12037248496285920244ULL;
int var_13 = 1039036007;
unsigned char var_14 = (unsigned char)200;
int zero = 0;
signed char var_16 = (signed char)-48;
short var_17 = (short)-4109;
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
