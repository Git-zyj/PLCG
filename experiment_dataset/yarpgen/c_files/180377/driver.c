#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned int var_1 = 197770313U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 3383365204295755190ULL;
unsigned char var_4 = (unsigned char)198;
unsigned long long int var_5 = 13652753869960540758ULL;
int var_6 = -2020829436;
short var_7 = (short)-22276;
int var_9 = -864520760;
long long int var_11 = -6148247303537128038LL;
short var_12 = (short)325;
unsigned char var_13 = (unsigned char)57;
unsigned long long int var_14 = 350881004890002936ULL;
unsigned short var_15 = (unsigned short)58467;
unsigned short var_17 = (unsigned short)63307;
short var_18 = (short)31540;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)46090;
short var_22 = (short)5427;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
