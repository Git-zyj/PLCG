#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 839174489;
_Bool var_1 = (_Bool)1;
short var_2 = (short)14400;
int var_3 = 1072113800;
unsigned short var_5 = (unsigned short)28887;
signed char var_6 = (signed char)11;
unsigned short var_7 = (unsigned short)62107;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-10311;
unsigned short var_12 = (unsigned short)22921;
int zero = 0;
signed char var_14 = (signed char)127;
_Bool var_15 = (_Bool)1;
int var_16 = -978844367;
unsigned short var_17 = (unsigned short)30479;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
