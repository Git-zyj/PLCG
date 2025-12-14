#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 5872864222089945827ULL;
unsigned char var_5 = (unsigned char)233;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-61;
unsigned char var_10 = (unsigned char)25;
signed char var_12 = (signed char)-12;
unsigned long long int var_13 = 4351312130219487351ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)19951;
unsigned short var_15 = (unsigned short)53424;
unsigned short var_16 = (unsigned short)34578;
signed char var_17 = (signed char)-13;
unsigned int var_18 = 3975873112U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
