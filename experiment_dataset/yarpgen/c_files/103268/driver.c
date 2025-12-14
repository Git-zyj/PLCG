#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1695532385;
unsigned short var_2 = (unsigned short)44860;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-6680;
signed char var_6 = (signed char)16;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)219;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 8290941279078861687ULL;
unsigned char var_12 = (unsigned char)62;
unsigned short var_13 = (unsigned short)30316;
int zero = 0;
int var_14 = 27287865;
signed char var_15 = (signed char)-110;
unsigned char var_16 = (unsigned char)21;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
