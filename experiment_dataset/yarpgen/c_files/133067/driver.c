#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
short var_1 = (short)-19918;
short var_2 = (short)27005;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)63400;
unsigned short var_5 = (unsigned short)7951;
unsigned short var_6 = (unsigned short)443;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-2;
unsigned short var_12 = (unsigned short)10966;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2626792014U;
unsigned int var_15 = 3647097978U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
