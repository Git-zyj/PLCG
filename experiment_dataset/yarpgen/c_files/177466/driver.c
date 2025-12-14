#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 377565929;
unsigned long long int var_2 = 14172996656712704621ULL;
unsigned long long int var_3 = 9892886553717193019ULL;
unsigned long long int var_4 = 13634730533175241540ULL;
int var_5 = 2032618048;
signed char var_6 = (signed char)7;
unsigned long long int var_7 = 3656377232893286999ULL;
unsigned long long int var_10 = 176694517585553408ULL;
long long int var_11 = 8976334751590053756LL;
unsigned char var_12 = (unsigned char)92;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-14285;
unsigned long long int var_15 = 9524416384733886229ULL;
int var_16 = -1467285686;
signed char var_17 = (signed char)4;
int var_18 = -1205991774;
int var_19 = -1450700015;
signed char var_20 = (signed char)-93;
int var_21 = 866414429;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)134;
long long int var_24 = 319386881286646850LL;
short var_25 = (short)-30549;
signed char var_26 = (signed char)126;
int var_27 = -316444008;
unsigned char var_28 = (unsigned char)136;
unsigned short var_29 = (unsigned short)10596;
unsigned long long int var_30 = 3064461766606372941ULL;
unsigned short var_31 = (unsigned short)59205;
unsigned int var_32 = 1749579524U;
signed char var_33 = (signed char)100;
unsigned long long int var_34 = 10346953034290628830ULL;
short var_35 = (short)18853;
unsigned short var_36 = (unsigned short)8571;
int var_37 = 873808518;
_Bool arr_21 [22] [22] ;
unsigned long long int arr_26 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 16075765192975938274ULL : 940288905831183273ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
