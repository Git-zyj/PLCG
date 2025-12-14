#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5385727592527253856LL;
unsigned char var_1 = (unsigned char)116;
signed char var_6 = (signed char)1;
long long int var_8 = 6009782429060508944LL;
int zero = 0;
unsigned int var_15 = 2973992854U;
signed char var_16 = (signed char)42;
unsigned short var_17 = (unsigned short)24724;
int var_18 = 634550818;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
