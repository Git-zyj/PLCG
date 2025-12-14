#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -220809100;
short var_7 = (short)16817;
short var_8 = (short)-9170;
unsigned short var_12 = (unsigned short)58996;
unsigned long long int var_15 = 1199295744099236287ULL;
unsigned short var_19 = (unsigned short)42996;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)127;
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
