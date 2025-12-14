#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
unsigned char var_2 = (unsigned char)212;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)3707;
int var_12 = 1942504269;
int var_14 = -2127478105;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)90;
unsigned short var_19 = (unsigned short)56782;
signed char var_20 = (signed char)-81;
int var_21 = -1204797249;
void init() {
}

void checksum() {
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
