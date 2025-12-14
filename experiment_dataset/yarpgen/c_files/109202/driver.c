#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4971223732606493185LL;
unsigned int var_6 = 2148575316U;
unsigned char var_11 = (unsigned char)205;
int var_14 = -197675951;
unsigned short var_16 = (unsigned short)46640;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
short var_21 = (short)-29989;
long long int var_22 = -2604472992263037904LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
