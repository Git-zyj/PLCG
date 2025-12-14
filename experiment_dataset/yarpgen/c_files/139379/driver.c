#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2349143958635749376ULL;
unsigned short var_1 = (unsigned short)50379;
unsigned long long int var_3 = 11771851300756621451ULL;
short var_4 = (short)-16412;
unsigned int var_5 = 275687726U;
unsigned long long int var_7 = 7978874426791542553ULL;
unsigned short var_8 = (unsigned short)60067;
long long int var_9 = 922948697342891488LL;
unsigned char var_10 = (unsigned char)106;
unsigned short var_16 = (unsigned short)25865;
unsigned short var_17 = (unsigned short)65149;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 5083878921543754190LL;
signed char var_22 = (signed char)116;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
