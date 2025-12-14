#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
signed char var_1 = (signed char)88;
unsigned char var_2 = (unsigned char)227;
unsigned long long int var_3 = 13356759898452064229ULL;
unsigned int var_4 = 4098518200U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)197;
unsigned int var_9 = 3007950393U;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1514644268U;
int zero = 0;
int var_15 = 1457958085;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)24107;
unsigned int var_18 = 2672819733U;
signed char var_19 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
