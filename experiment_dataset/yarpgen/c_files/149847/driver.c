#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -669074874;
long long int var_4 = -2658641577227316282LL;
unsigned char var_5 = (unsigned char)6;
unsigned long long int var_6 = 16457311965768491749ULL;
short var_7 = (short)-32663;
unsigned char var_8 = (unsigned char)161;
unsigned long long int var_10 = 348249910899938933ULL;
int zero = 0;
signed char var_12 = (signed char)(-127 - 1);
unsigned char var_13 = (unsigned char)107;
signed char var_14 = (signed char)-29;
void init() {
}

void checksum() {
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
