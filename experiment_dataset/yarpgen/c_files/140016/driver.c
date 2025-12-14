#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)12;
int var_7 = -1664868750;
unsigned short var_10 = (unsigned short)63479;
unsigned char var_11 = (unsigned char)173;
signed char var_19 = (signed char)5;
int zero = 0;
signed char var_20 = (signed char)-45;
int var_21 = -1006501511;
signed char var_22 = (signed char)75;
unsigned short var_23 = (unsigned short)42179;
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
