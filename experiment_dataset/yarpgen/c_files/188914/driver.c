#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
unsigned char var_11 = (unsigned char)168;
unsigned int var_12 = 2053532124U;
unsigned char var_13 = (unsigned char)2;
int zero = 0;
short var_18 = (short)-28655;
int var_19 = 645311028;
int var_20 = -974711675;
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
