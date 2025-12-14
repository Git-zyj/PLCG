#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3335;
unsigned char var_1 = (unsigned char)213;
unsigned char var_2 = (unsigned char)46;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)41953;
unsigned int var_10 = 4042029022U;
int zero = 0;
short var_11 = (short)7026;
unsigned int var_12 = 3910923528U;
unsigned int var_13 = 1745850961U;
unsigned char var_14 = (unsigned char)4;
int var_15 = -2134568650;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
