#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3193829441U;
signed char var_1 = (signed char)21;
signed char var_5 = (signed char)16;
signed char var_6 = (signed char)6;
signed char var_8 = (signed char)-59;
unsigned long long int var_9 = 5515626093222811322ULL;
unsigned char var_11 = (unsigned char)43;
unsigned char var_14 = (unsigned char)49;
unsigned short var_16 = (unsigned short)22922;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5889;
void init() {
}

void checksum() {
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
