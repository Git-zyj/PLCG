#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
unsigned char var_2 = (unsigned char)126;
unsigned char var_6 = (unsigned char)213;
int var_7 = -883410909;
unsigned short var_8 = (unsigned short)2297;
short var_9 = (short)21309;
unsigned char var_11 = (unsigned char)139;
short var_12 = (short)-3912;
short var_15 = (short)-24472;
int zero = 0;
unsigned int var_19 = 2810861217U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)30259;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
