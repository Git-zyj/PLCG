#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
unsigned int var_4 = 2667821089U;
unsigned int var_5 = 1190161229U;
unsigned int var_6 = 318839550U;
unsigned int var_11 = 2395359119U;
unsigned short var_13 = (unsigned short)33072;
short var_14 = (short)18261;
short var_15 = (short)-26555;
int var_16 = 129849782;
unsigned long long int var_17 = 12552908559448286390ULL;
int var_18 = -1929014568;
unsigned char var_19 = (unsigned char)240;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)113;
int var_22 = 1965106264;
unsigned short var_23 = (unsigned short)4383;
unsigned char var_24 = (unsigned char)128;
unsigned int var_25 = 4258725534U;
signed char var_26 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
