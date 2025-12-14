#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1790188135;
int var_11 = -68890639;
signed char var_12 = (signed char)125;
unsigned short var_13 = (unsigned short)56512;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned short var_17 = (unsigned short)30160;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)53;
unsigned char var_20 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
