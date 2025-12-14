#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -476329597;
unsigned short var_3 = (unsigned short)51507;
unsigned short var_5 = (unsigned short)16884;
_Bool var_6 = (_Bool)1;
short var_8 = (short)3587;
signed char var_11 = (signed char)74;
unsigned short var_12 = (unsigned short)5299;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
signed char var_17 = (signed char)75;
long long int var_18 = 2269506979855902572LL;
unsigned short var_19 = (unsigned short)41226;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
