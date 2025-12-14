#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1422711024;
unsigned char var_6 = (unsigned char)54;
unsigned long long int var_9 = 6400772730192270152ULL;
unsigned long long int var_12 = 13216208279594703046ULL;
int zero = 0;
signed char var_13 = (signed char)22;
long long int var_14 = 3912942099926411754LL;
signed char var_15 = (signed char)19;
unsigned char var_16 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
