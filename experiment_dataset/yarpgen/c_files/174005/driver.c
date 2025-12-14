#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52105;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13785560452704854110ULL;
unsigned long long int var_5 = 17956639318434073475ULL;
long long int var_6 = -5993944585328764443LL;
long long int var_7 = -6172966522471785860LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1616777242U;
int var_11 = 1771877495;
unsigned int var_12 = 256899736U;
int zero = 0;
unsigned int var_13 = 899885229U;
unsigned long long int var_14 = 10732197259472533047ULL;
int var_15 = -1255753729;
long long int var_16 = -5372551269175133829LL;
unsigned char var_17 = (unsigned char)51;
signed char var_18 = (signed char)120;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3979466163145687415LL;
unsigned char var_21 = (unsigned char)121;
short var_22 = (short)-28623;
int var_23 = 1181637241;
unsigned int var_24 = 522228369U;
int var_25 = 1033239310;
int var_26 = -1503879246;
int arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
int arr_2 [25] ;
unsigned int arr_5 [12] ;
unsigned short arr_6 [12] ;
long long int arr_7 [12] [12] ;
unsigned char arr_8 [12] [12] [12] [12] ;
unsigned char arr_10 [12] [12] ;
unsigned char arr_15 [12] [12] [12] [12] ;
unsigned int arr_17 [12] ;
int arr_18 [12] [12] ;
int arr_21 [22] ;
int arr_3 [25] [25] ;
unsigned char arr_16 [12] [12] ;
signed char arr_23 [22] [22] ;
long long int arr_27 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2124926795;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 683179396U : 3855701275U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1687259718;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 897664800U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)28915;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 8894712831088626501LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)66 : (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 1887138110U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = 14375702;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 1239227271;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 252716763 : 1729674218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? -7920651083212551319LL : -2530423347400004381LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
