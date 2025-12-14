#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)101;
long long int var_6 = 6879384519061414000LL;
unsigned short var_8 = (unsigned short)39405;
_Bool var_9 = (_Bool)1;
long long int var_11 = 227975105568475004LL;
unsigned short var_12 = (unsigned short)6119;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)47;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-25091;
int zero = 0;
unsigned short var_20 = (unsigned short)63965;
int var_21 = -601629224;
long long int var_22 = 7092621150535927973LL;
unsigned int var_23 = 1069452740U;
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
