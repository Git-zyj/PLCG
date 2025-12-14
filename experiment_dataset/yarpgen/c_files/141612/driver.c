#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17269294999600051653ULL;
unsigned char var_2 = (unsigned char)99;
unsigned long long int var_4 = 11579914718427213674ULL;
short var_7 = (short)-21320;
long long int var_8 = 7530164853095964105LL;
unsigned char var_9 = (unsigned char)141;
int var_10 = 498774682;
unsigned char var_11 = (unsigned char)194;
unsigned int var_12 = 1655532506U;
unsigned long long int var_13 = 9580186566542940706ULL;
unsigned char var_14 = (unsigned char)163;
unsigned int var_15 = 3640867625U;
unsigned char var_16 = (unsigned char)121;
unsigned int var_18 = 1235757810U;
unsigned int var_19 = 2750607715U;
int zero = 0;
unsigned long long int var_20 = 13810528934632661184ULL;
unsigned short var_21 = (unsigned short)8182;
short var_22 = (short)-3735;
int var_23 = -173618291;
void init() {
}

void checksum() {
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
