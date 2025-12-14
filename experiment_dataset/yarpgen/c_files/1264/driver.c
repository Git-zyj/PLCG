#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7122633091307889617LL;
unsigned char var_4 = (unsigned char)7;
unsigned char var_5 = (unsigned char)224;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 597127324U;
int var_8 = -80609901;
int zero = 0;
unsigned int var_11 = 1537763391U;
unsigned char var_12 = (unsigned char)225;
short var_13 = (short)3645;
_Bool var_14 = (_Bool)1;
int var_15 = 1626292391;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
