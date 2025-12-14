#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6390;
_Bool var_8 = (_Bool)0;
int var_9 = 1494027349;
unsigned short var_10 = (unsigned short)11545;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-15;
unsigned short var_13 = (unsigned short)20044;
signed char var_14 = (signed char)-56;
unsigned int var_15 = 310094690U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-931;
int zero = 0;
unsigned char var_19 = (unsigned char)108;
signed char var_20 = (signed char)-92;
signed char var_21 = (signed char)43;
signed char var_22 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
