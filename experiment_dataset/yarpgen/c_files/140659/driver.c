#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13885992794831199171ULL;
unsigned int var_2 = 2128661770U;
unsigned int var_4 = 1779444148U;
unsigned int var_5 = 1431146767U;
unsigned int var_6 = 2401475961U;
unsigned long long int var_7 = 14607637078112809000ULL;
signed char var_8 = (signed char)-34;
signed char var_9 = (signed char)65;
unsigned char var_10 = (unsigned char)186;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29565;
unsigned short var_13 = (unsigned short)8286;
int zero = 0;
unsigned char var_15 = (unsigned char)145;
unsigned char var_16 = (unsigned char)158;
unsigned int var_17 = 2717567560U;
signed char var_18 = (signed char)20;
void init() {
}

void checksum() {
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
