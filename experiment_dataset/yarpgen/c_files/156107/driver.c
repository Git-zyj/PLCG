#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6785507860404937768ULL;
unsigned short var_3 = (unsigned short)58840;
unsigned short var_10 = (unsigned short)33071;
unsigned short var_11 = (unsigned short)7300;
signed char var_12 = (signed char)31;
unsigned long long int var_14 = 18195079057406886865ULL;
int zero = 0;
signed char var_15 = (signed char)21;
signed char var_16 = (signed char)27;
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
