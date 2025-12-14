#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40262;
long long int var_2 = -691853563444737422LL;
short var_3 = (short)-5450;
unsigned char var_5 = (unsigned char)139;
unsigned char var_7 = (unsigned char)93;
unsigned int var_12 = 2698027423U;
short var_13 = (short)8549;
int zero = 0;
unsigned long long int var_17 = 11245575514621987348ULL;
signed char var_18 = (signed char)33;
unsigned short var_19 = (unsigned short)48266;
unsigned long long int var_20 = 15870856702032884186ULL;
unsigned short var_21 = (unsigned short)15479;
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
