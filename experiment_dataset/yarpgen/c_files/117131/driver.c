#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5566531767633197837LL;
unsigned char var_2 = (unsigned char)23;
unsigned short var_3 = (unsigned short)16885;
unsigned int var_4 = 3356093780U;
unsigned short var_5 = (unsigned short)45819;
unsigned int var_7 = 1196409288U;
int zero = 0;
short var_11 = (short)-6320;
signed char var_12 = (signed char)-107;
void init() {
}

void checksum() {
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
