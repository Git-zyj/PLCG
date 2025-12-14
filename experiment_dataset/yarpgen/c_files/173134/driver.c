#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned short var_1 = (unsigned short)52513;
signed char var_2 = (signed char)95;
long long int var_4 = 3895771088415279889LL;
unsigned char var_5 = (unsigned char)173;
unsigned short var_8 = (unsigned short)21561;
int zero = 0;
signed char var_10 = (signed char)30;
unsigned int var_11 = 14107095U;
long long int var_12 = -7888972929535009785LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
