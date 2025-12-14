#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7264;
long long int var_3 = 3473850560174912028LL;
unsigned char var_5 = (unsigned char)83;
int var_6 = 1613155114;
signed char var_7 = (signed char)-87;
short var_12 = (short)-29740;
long long int var_15 = -665322586232820101LL;
int zero = 0;
unsigned char var_16 = (unsigned char)22;
unsigned int var_17 = 2044928295U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
