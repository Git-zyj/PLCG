#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)-4652;
signed char var_7 = (signed char)95;
unsigned short var_9 = (unsigned short)52950;
unsigned int var_10 = 2466629631U;
short var_12 = (short)-25349;
short var_13 = (short)5900;
unsigned char var_14 = (unsigned char)195;
int zero = 0;
short var_16 = (short)12131;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3719298761U;
short var_20 = (short)-18790;
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
