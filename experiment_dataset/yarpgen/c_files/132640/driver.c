#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30288;
unsigned short var_3 = (unsigned short)6709;
long long int var_4 = 2082979254878727109LL;
short var_6 = (short)-17013;
unsigned short var_8 = (unsigned short)37626;
unsigned short var_9 = (unsigned short)44325;
int var_12 = -562075000;
int var_13 = -1840473725;
unsigned char var_14 = (unsigned char)68;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5690105992091951587LL;
int var_20 = 57761279;
int var_21 = 1221271577;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
