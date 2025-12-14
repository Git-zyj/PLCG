#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
short var_2 = (short)8410;
unsigned long long int var_4 = 9389808375268737013ULL;
int var_6 = 1166273745;
signed char var_7 = (signed char)-63;
_Bool var_9 = (_Bool)0;
short var_11 = (short)32649;
signed char var_12 = (signed char)94;
signed char var_13 = (signed char)-119;
signed char var_14 = (signed char)54;
int zero = 0;
int var_15 = 1383694330;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)33765;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)56218;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
