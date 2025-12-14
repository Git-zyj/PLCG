#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)135;
unsigned char var_14 = (unsigned char)225;
unsigned int var_16 = 3182567027U;
signed char var_17 = (signed char)39;
int zero = 0;
unsigned short var_20 = (unsigned short)42723;
int var_21 = -1791703330;
long long int var_22 = 3840263261810771176LL;
unsigned short var_23 = (unsigned short)35075;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
