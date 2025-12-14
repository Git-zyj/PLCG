#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
int var_5 = 24558877;
int zero = 0;
unsigned short var_10 = (unsigned short)1419;
signed char var_11 = (signed char)47;
int var_12 = 1324143429;
unsigned short var_13 = (unsigned short)61779;
unsigned int var_14 = 1166563114U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
