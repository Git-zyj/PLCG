#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
int var_1 = -356903874;
unsigned int var_3 = 2248085582U;
unsigned short var_4 = (unsigned short)64969;
unsigned short var_5 = (unsigned short)57527;
int var_6 = 57073934;
unsigned int var_7 = 664960435U;
unsigned int var_8 = 1259549031U;
int zero = 0;
unsigned long long int var_10 = 14330448517372647056ULL;
short var_11 = (short)-6570;
unsigned char var_12 = (unsigned char)170;
short var_13 = (short)-20593;
unsigned char var_14 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
