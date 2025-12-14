#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)82;
unsigned int var_3 = 1854946283U;
short var_5 = (short)11512;
unsigned char var_11 = (unsigned char)142;
signed char var_13 = (signed char)-118;
int zero = 0;
short var_14 = (short)-17597;
unsigned short var_15 = (unsigned short)50222;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
