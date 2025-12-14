#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -535016644876617971LL;
short var_7 = (short)-27887;
long long int var_13 = -3534899856427662218LL;
long long int var_14 = -3521676220073243276LL;
signed char var_15 = (signed char)-2;
unsigned short var_16 = (unsigned short)45249;
int zero = 0;
short var_17 = (short)15675;
unsigned long long int var_18 = 3972931066817545681ULL;
unsigned short var_19 = (unsigned short)16298;
signed char var_20 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
