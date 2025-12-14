#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15615;
unsigned short var_1 = (unsigned short)30249;
short var_2 = (short)3099;
unsigned char var_4 = (unsigned char)84;
unsigned char var_5 = (unsigned char)162;
short var_7 = (short)-12820;
_Bool var_8 = (_Bool)0;
unsigned short var_14 = (unsigned short)58710;
unsigned int var_15 = 1499677540U;
int zero = 0;
unsigned int var_17 = 4280579552U;
unsigned int var_18 = 2684905766U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
