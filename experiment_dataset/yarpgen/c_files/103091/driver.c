#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
long long int var_2 = 3790612464617203718LL;
long long int var_5 = -4953536177222774580LL;
unsigned char var_6 = (unsigned char)64;
unsigned short var_8 = (unsigned short)55970;
int zero = 0;
unsigned char var_10 = (unsigned char)2;
unsigned char var_11 = (unsigned char)224;
signed char var_12 = (signed char)-48;
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
