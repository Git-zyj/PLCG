#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1163;
unsigned short var_3 = (unsigned short)46039;
unsigned char var_6 = (unsigned char)11;
unsigned short var_7 = (unsigned short)9561;
short var_12 = (short)3319;
unsigned short var_13 = (unsigned short)5814;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 674927349U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)30084;
short var_23 = (short)18887;
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
