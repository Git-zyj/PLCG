#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-115;
unsigned int var_6 = 2145883329U;
signed char var_8 = (signed char)-24;
signed char var_9 = (signed char)-44;
int var_11 = 256972317;
unsigned short var_14 = (unsigned short)33824;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
unsigned int var_20 = 2660643381U;
unsigned short var_21 = (unsigned short)8648;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)22239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
