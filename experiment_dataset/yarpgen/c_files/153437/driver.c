#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned char var_1 = (unsigned char)190;
unsigned short var_3 = (unsigned short)12038;
int var_5 = -1691219534;
unsigned char var_6 = (unsigned char)149;
unsigned char var_7 = (unsigned char)14;
short var_8 = (short)4730;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-85;
short var_12 = (short)11399;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-7982;
signed char var_16 = (signed char)116;
unsigned int var_17 = 2410624252U;
signed char var_18 = (signed char)118;
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
