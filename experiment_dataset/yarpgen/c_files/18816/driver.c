#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32401;
signed char var_2 = (signed char)-83;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)51186;
short var_7 = (short)26376;
unsigned short var_9 = (unsigned short)39958;
unsigned char var_10 = (unsigned char)12;
int var_13 = -968349217;
unsigned int var_15 = 1316710326U;
signed char var_17 = (signed char)56;
int zero = 0;
int var_18 = 1791116997;
unsigned long long int var_19 = 2317552293773897477ULL;
unsigned short var_20 = (unsigned short)62802;
unsigned char var_21 = (unsigned char)251;
unsigned int var_22 = 3333490228U;
long long int var_23 = 6447084787483801360LL;
signed char var_24 = (signed char)98;
short var_25 = (short)31294;
signed char var_26 = (signed char)127;
short var_27 = (short)27781;
signed char var_28 = (signed char)56;
int var_29 = 20228535;
signed char var_30 = (signed char)-120;
unsigned short var_31 = (unsigned short)32010;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-110;
unsigned int var_35 = 3072513240U;
signed char var_36 = (signed char)-123;
unsigned int var_37 = 1403920067U;
int arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned short arr_3 [25] [25] [25] ;
int arr_5 [19] ;
signed char arr_6 [19] ;
unsigned short arr_7 [19] ;
short arr_8 [12] ;
signed char arr_9 [12] ;
unsigned int arr_17 [16] ;
unsigned long long int arr_4 [25] [25] [25] ;
long long int arr_13 [10] ;
signed char arr_19 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -379454585 : 1420513786;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)35472;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 13184405147635439543ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)22058 : (unsigned short)56021;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -1852150449;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)48543;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)18874;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 236918008U : 3150615751U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13030869429675315300ULL : 1894782434898911206ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = -6539764893225017011LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-5 : (signed char)-43;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
