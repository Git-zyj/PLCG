#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3096358802U;
unsigned char var_3 = (unsigned char)160;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8355499999381493552LL;
signed char var_10 = (signed char)-2;
unsigned char var_11 = (unsigned char)130;
long long int var_12 = 8987591614898785754LL;
unsigned int var_15 = 3977120983U;
unsigned short var_16 = (unsigned short)53676;
unsigned short var_18 = (unsigned short)30096;
int zero = 0;
signed char var_19 = (signed char)70;
short var_20 = (short)-81;
short var_21 = (short)3364;
_Bool var_22 = (_Bool)1;
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
