#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1135906344;
unsigned char var_4 = (unsigned char)213;
long long int var_5 = -5891053462948266111LL;
unsigned long long int var_8 = 15704042370586548949ULL;
int zero = 0;
int var_10 = -1039658700;
unsigned char var_11 = (unsigned char)132;
signed char var_12 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
