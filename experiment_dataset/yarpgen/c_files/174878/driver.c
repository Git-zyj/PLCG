#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)200;
unsigned short var_4 = (unsigned short)11787;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3737966947U;
unsigned char var_8 = (unsigned char)28;
short var_9 = (short)8410;
unsigned long long int var_13 = 268790073362246389ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)6828;
signed char var_17 = (signed char)11;
unsigned char var_18 = (unsigned char)185;
unsigned char var_19 = (unsigned char)209;
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
