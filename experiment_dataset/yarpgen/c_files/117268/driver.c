#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)134;
unsigned short var_5 = (unsigned short)27560;
unsigned char var_6 = (unsigned char)90;
_Bool var_7 = (_Bool)0;
short var_8 = (short)31732;
unsigned int var_13 = 1540823262U;
int zero = 0;
long long int var_14 = -5982105015752117159LL;
signed char var_15 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
