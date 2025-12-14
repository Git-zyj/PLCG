#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
int var_1 = 1705889403;
unsigned char var_2 = (unsigned char)204;
unsigned short var_3 = (unsigned short)57493;
short var_6 = (short)13500;
unsigned short var_11 = (unsigned short)19945;
int zero = 0;
short var_12 = (short)-32407;
long long int var_13 = -8317038976252474470LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
