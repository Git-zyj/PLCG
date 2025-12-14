#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52360;
unsigned char var_2 = (unsigned char)207;
unsigned char var_6 = (unsigned char)155;
unsigned short var_7 = (unsigned short)54260;
unsigned short var_9 = (unsigned short)55453;
unsigned short var_11 = (unsigned short)7077;
signed char var_12 = (signed char)80;
short var_17 = (short)7084;
unsigned char var_18 = (unsigned char)252;
int zero = 0;
int var_19 = -1780227687;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 476724645U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)16160;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)63717;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
