#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21588;
int var_1 = -1570776757;
int var_6 = -530523952;
unsigned char var_8 = (unsigned char)197;
_Bool var_10 = (_Bool)0;
short var_12 = (short)1443;
unsigned short var_13 = (unsigned short)48719;
short var_14 = (short)-16566;
int zero = 0;
unsigned char var_16 = (unsigned char)114;
unsigned int var_17 = 36689951U;
unsigned int var_18 = 3315317458U;
short var_19 = (short)-29284;
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
