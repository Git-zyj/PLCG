#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4251872846U;
unsigned char var_4 = (unsigned char)83;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-71;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-5;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)52700;
unsigned int var_18 = 1899446768U;
short var_19 = (short)3762;
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
