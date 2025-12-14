#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3260;
int var_1 = 1580533613;
unsigned short var_3 = (unsigned short)55452;
unsigned short var_4 = (unsigned short)16673;
short var_7 = (short)-29697;
long long int var_10 = 4178449207189529189LL;
unsigned char var_12 = (unsigned char)203;
unsigned short var_15 = (unsigned short)10176;
int zero = 0;
unsigned short var_19 = (unsigned short)998;
int var_20 = -2104296881;
signed char var_21 = (signed char)20;
unsigned int var_22 = 673423736U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
