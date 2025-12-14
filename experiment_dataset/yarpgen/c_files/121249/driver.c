#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2761839032096025590LL;
unsigned char var_11 = (unsigned char)86;
unsigned char var_14 = (unsigned char)36;
int zero = 0;
short var_20 = (short)-13996;
unsigned short var_21 = (unsigned short)29762;
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
