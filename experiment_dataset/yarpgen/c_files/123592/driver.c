#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40959;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)47;
short var_11 = (short)1519;
int var_15 = 1288657213;
signed char var_16 = (signed char)-81;
unsigned short var_17 = (unsigned short)31350;
int var_18 = -1658458569;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1210214659;
void init() {
}

void checksum() {
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
