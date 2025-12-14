#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)14;
int var_12 = -1049595163;
unsigned short var_15 = (unsigned short)42222;
int zero = 0;
unsigned short var_18 = (unsigned short)36181;
long long int var_19 = -4030670964262711218LL;
long long int var_20 = -4288340903706702219LL;
unsigned int var_21 = 2183870892U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
