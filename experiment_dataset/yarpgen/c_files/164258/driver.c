#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47928;
long long int var_4 = -6885149235576636009LL;
short var_9 = (short)8451;
int var_11 = 1771578597;
unsigned char var_14 = (unsigned char)56;
short var_16 = (short)-1546;
int zero = 0;
unsigned char var_18 = (unsigned char)158;
int var_19 = -2088488060;
short var_20 = (short)-23680;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
