#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32296;
short var_3 = (short)-13091;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)167;
short var_8 = (short)-2451;
unsigned char var_9 = (unsigned char)93;
_Bool var_10 = (_Bool)1;
short var_14 = (short)22703;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)37702;
int zero = 0;
long long int var_20 = -3445235145425418662LL;
unsigned int var_21 = 3465447941U;
short var_22 = (short)-7399;
_Bool var_23 = (_Bool)0;
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
