#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56505;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)32;
signed char var_6 = (signed char)-90;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-726;
long long int var_10 = 1478351080719724113LL;
long long int var_12 = -7292115470980002992LL;
int var_13 = 1691292297;
int zero = 0;
unsigned long long int var_14 = 9262267661419984266ULL;
short var_15 = (short)11119;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
