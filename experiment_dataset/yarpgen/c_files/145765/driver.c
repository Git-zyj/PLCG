#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29149;
long long int var_2 = 6458545242002022763LL;
unsigned int var_3 = 2881442540U;
unsigned int var_4 = 572476571U;
long long int var_5 = 7038035890642118876LL;
signed char var_6 = (signed char)96;
unsigned long long int var_7 = 14414003249713959167ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3207976495U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1395686954877839523ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 12796744509569704419ULL;
int zero = 0;
short var_19 = (short)-18155;
short var_20 = (short)32079;
short var_21 = (short)9276;
unsigned long long int var_22 = 8856673884284977394ULL;
unsigned char var_23 = (unsigned char)82;
int var_24 = -677584585;
short var_25 = (short)893;
unsigned long long int var_26 = 14805291045016825685ULL;
short var_27 = (short)-13800;
short var_28 = (short)-4751;
unsigned long long int var_29 = 3824572746965295236ULL;
signed char var_30 = (signed char)-110;
int var_31 = 301311225;
unsigned short var_32 = (unsigned short)1275;
int var_33 = 1487351597;
short var_34 = (short)32311;
unsigned char var_35 = (unsigned char)245;
unsigned int var_36 = 1942085708U;
signed char var_37 = (signed char)-31;
signed char var_38 = (signed char)57;
long long int var_39 = -3149490068544163891LL;
unsigned int var_40 = 1303521514U;
signed char var_41 = (signed char)90;
unsigned short var_42 = (unsigned short)43752;
short var_43 = (short)-24857;
_Bool var_44 = (_Bool)0;
long long int var_45 = -6648434771703800805LL;
long long int var_46 = 4969010075839019985LL;
int var_47 = 1224443694;
unsigned long long int var_48 = 13812679805449035773ULL;
long long int var_49 = -1512882034905998125LL;
unsigned long long int var_50 = 18207441713539721949ULL;
unsigned short var_51 = (unsigned short)10210;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
