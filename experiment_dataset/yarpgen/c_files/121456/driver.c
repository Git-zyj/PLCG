#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
int var_1 = -1101021428;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-33;
signed char var_4 = (signed char)-9;
unsigned int var_5 = 778221112U;
short var_6 = (short)-27595;
unsigned char var_7 = (unsigned char)117;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)144;
short var_12 = (short)2956;
int zero = 0;
short var_13 = (short)-19498;
unsigned short var_14 = (unsigned short)21885;
unsigned char var_15 = (unsigned char)40;
long long int var_16 = 659802211275738656LL;
unsigned short var_17 = (unsigned short)1264;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
