#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32498;
unsigned int var_2 = 3778416654U;
unsigned short var_3 = (unsigned short)8909;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-1085;
unsigned short var_6 = (unsigned short)45423;
unsigned int var_7 = 2883942939U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3948724272U;
unsigned short var_13 = (unsigned short)15336;
short var_14 = (short)-11367;
int zero = 0;
short var_15 = (short)-17524;
unsigned int var_16 = 2740514747U;
short var_17 = (short)-28323;
unsigned short var_18 = (unsigned short)57194;
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
