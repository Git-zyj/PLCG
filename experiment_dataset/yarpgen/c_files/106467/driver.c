#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)40;
int var_6 = 1589854345;
unsigned short var_7 = (unsigned short)1928;
unsigned char var_14 = (unsigned char)91;
long long int var_16 = -671484475865276856LL;
long long int var_18 = -8921352434829531711LL;
int zero = 0;
unsigned long long int var_19 = 12456905500781120551ULL;
unsigned long long int var_20 = 2159546504612241549ULL;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
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
