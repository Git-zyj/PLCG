#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-1979;
unsigned short var_4 = (unsigned short)3074;
unsigned char var_10 = (unsigned char)2;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
unsigned short var_18 = (unsigned short)23316;
unsigned short var_19 = (unsigned short)27839;
int var_20 = -1911547449;
int var_21 = -673331277;
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
