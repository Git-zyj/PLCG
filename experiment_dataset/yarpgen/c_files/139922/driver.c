#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47535;
long long int var_3 = -7112910667607528556LL;
unsigned long long int var_5 = 7779408185501513084ULL;
unsigned char var_6 = (unsigned char)22;
unsigned short var_9 = (unsigned short)65012;
unsigned short var_10 = (unsigned short)35874;
unsigned char var_12 = (unsigned char)184;
short var_13 = (short)-6061;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
unsigned char var_18 = (unsigned char)126;
long long int var_19 = 299353515164430751LL;
void init() {
}

void checksum() {
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
