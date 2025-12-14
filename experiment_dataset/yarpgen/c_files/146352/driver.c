#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8319733953062417003ULL;
unsigned long long int var_2 = 16909457452446654460ULL;
unsigned char var_6 = (unsigned char)24;
signed char var_8 = (signed char)13;
unsigned short var_12 = (unsigned short)35248;
int var_16 = 2055075207;
short var_17 = (short)8192;
int zero = 0;
unsigned long long int var_20 = 12217411659712609516ULL;
_Bool var_21 = (_Bool)0;
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
