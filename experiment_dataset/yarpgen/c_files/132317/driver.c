#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
int var_3 = -427820519;
int var_5 = 284856646;
unsigned short var_8 = (unsigned short)17659;
int zero = 0;
unsigned char var_10 = (unsigned char)235;
short var_11 = (short)28058;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
