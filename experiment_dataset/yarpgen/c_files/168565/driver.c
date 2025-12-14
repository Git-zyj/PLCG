#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10910;
unsigned long long int var_7 = 3103744051771751780ULL;
int var_12 = -1313356831;
int zero = 0;
int var_13 = -1300595005;
long long int var_14 = 8261451334084124405LL;
short var_15 = (short)-7081;
int var_16 = -11275619;
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
