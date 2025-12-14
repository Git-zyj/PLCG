#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54869;
unsigned long long int var_6 = 6637636417761111848ULL;
signed char var_10 = (signed char)-81;
int zero = 0;
unsigned long long int var_20 = 1903949236999218945ULL;
short var_21 = (short)1185;
signed char var_22 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
