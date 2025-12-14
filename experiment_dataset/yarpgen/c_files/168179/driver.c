#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11630956797522983325ULL;
signed char var_1 = (signed char)8;
short var_10 = (short)-32648;
unsigned int var_12 = 708620284U;
unsigned char var_17 = (unsigned char)188;
int zero = 0;
long long int var_18 = -8564379075020234294LL;
long long int var_19 = 5626702065809078606LL;
int var_20 = 912358774;
void init() {
}

void checksum() {
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
