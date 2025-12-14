#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14639;
unsigned char var_3 = (unsigned char)229;
unsigned char var_6 = (unsigned char)10;
unsigned char var_7 = (unsigned char)23;
long long int var_8 = -656779959321919309LL;
int zero = 0;
long long int var_11 = -7020537541300164026LL;
unsigned char var_12 = (unsigned char)68;
short var_13 = (short)-14914;
short var_14 = (short)16736;
void init() {
}

void checksum() {
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
