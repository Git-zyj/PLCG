#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1464840215U;
short var_6 = (short)8710;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
signed char var_15 = (signed char)-98;
unsigned long long int var_16 = 12185609542475157671ULL;
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
