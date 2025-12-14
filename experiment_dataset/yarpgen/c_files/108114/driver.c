#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1893848551;
long long int var_7 = 7176603588485971497LL;
int var_11 = -2080458903;
signed char var_12 = (signed char)33;
int zero = 0;
short var_19 = (short)16810;
unsigned char var_20 = (unsigned char)12;
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
