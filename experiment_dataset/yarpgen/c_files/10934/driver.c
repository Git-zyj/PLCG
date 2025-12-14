#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7379251541950290774LL;
unsigned long long int var_1 = 9572658031637383696ULL;
unsigned long long int var_2 = 15085340826619903586ULL;
unsigned int var_3 = 3201990721U;
unsigned short var_4 = (unsigned short)34031;
unsigned int var_5 = 1901828823U;
signed char var_6 = (signed char)-101;
long long int var_7 = -7217481715718548717LL;
unsigned long long int var_8 = 12888576545484681033ULL;
int var_9 = -1673607642;
unsigned short var_10 = (unsigned short)42750;
int zero = 0;
unsigned int var_11 = 761247338U;
unsigned short var_12 = (unsigned short)28255;
short var_13 = (short)14042;
short var_14 = (short)5102;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14603794365801811310ULL;
signed char var_17 = (signed char)-62;
unsigned char var_18 = (unsigned char)195;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)7692;
signed char var_21 = (signed char)92;
unsigned char var_22 = (unsigned char)232;
unsigned short var_23 = (unsigned short)5636;
short var_24 = (short)12865;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 1345457791298698219ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
