#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned long long int var_1 = 14619761078538695566ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)31392;
signed char var_4 = (signed char)-46;
unsigned short var_5 = (unsigned short)35261;
unsigned long long int var_6 = 11741101324394275125ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 9089668184252652432ULL;
unsigned short var_10 = (unsigned short)41228;
int zero = 0;
short var_11 = (short)-12419;
short var_12 = (short)14106;
unsigned short var_13 = (unsigned short)47298;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
