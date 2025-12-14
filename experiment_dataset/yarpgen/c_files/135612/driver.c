#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17188845160684335645ULL;
int var_2 = -1198930831;
unsigned char var_3 = (unsigned char)184;
long long int var_4 = 4576602706119726774LL;
int var_5 = 583773240;
unsigned short var_6 = (unsigned short)9621;
long long int var_7 = 1597797740908169618LL;
unsigned long long int var_10 = 6113216169321147459ULL;
short var_11 = (short)-32583;
unsigned int var_12 = 2405881875U;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)61117;
int zero = 0;
unsigned int var_17 = 1181612515U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3477734106U;
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
