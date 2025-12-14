#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)95;
short var_3 = (short)-2362;
unsigned int var_4 = 3601349504U;
signed char var_5 = (signed char)-24;
signed char var_6 = (signed char)120;
signed char var_7 = (signed char)-74;
long long int var_8 = -8055192329140358581LL;
short var_10 = (short)19466;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)2171;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)223;
unsigned char var_15 = (unsigned char)227;
unsigned short var_16 = (unsigned short)14131;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
