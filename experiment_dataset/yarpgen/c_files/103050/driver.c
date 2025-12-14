#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)2;
unsigned int var_14 = 1767955541U;
unsigned char var_16 = (unsigned char)41;
short var_18 = (short)-18819;
int zero = 0;
long long int var_20 = -5986398583904987821LL;
short var_21 = (short)12680;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
