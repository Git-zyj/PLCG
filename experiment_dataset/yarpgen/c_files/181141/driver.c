#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8168;
unsigned char var_6 = (unsigned char)104;
short var_10 = (short)-25273;
unsigned short var_16 = (unsigned short)45867;
int zero = 0;
int var_17 = 92306979;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)54;
short var_20 = (short)19205;
short var_21 = (short)17452;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
