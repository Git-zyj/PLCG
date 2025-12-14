#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2550;
short var_1 = (short)4953;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-112;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)156;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1478726158;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)107;
void init() {
}

void checksum() {
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
