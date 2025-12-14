#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1597533157U;
short var_1 = (short)22419;
unsigned char var_3 = (unsigned char)206;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)60121;
unsigned int var_8 = 2486605206U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)24310;
unsigned int var_13 = 1367251041U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
