#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)46;
unsigned long long int var_5 = 1640466085895723032ULL;
long long int var_6 = -2646898758942546643LL;
short var_10 = (short)7527;
_Bool var_12 = (_Bool)1;
short var_13 = (short)24693;
unsigned int var_14 = 1486396530U;
int zero = 0;
signed char var_20 = (signed char)-92;
unsigned long long int var_21 = 12502296620314285437ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
