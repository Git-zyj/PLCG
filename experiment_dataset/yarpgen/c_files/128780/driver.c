#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4187986977U;
unsigned char var_1 = (unsigned char)222;
unsigned char var_2 = (unsigned char)47;
unsigned short var_3 = (unsigned short)37955;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 436393921618278652ULL;
unsigned long long int var_7 = 9409392415571289451ULL;
int var_8 = -1390661595;
unsigned short var_9 = (unsigned short)12046;
unsigned int var_10 = 1908579403U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 14079418659984307167ULL;
long long int var_13 = -8320511604446487974LL;
unsigned int var_14 = 1764766583U;
int var_15 = 45004528;
_Bool var_16 = (_Bool)1;
long long int var_17 = -4238405684342709638LL;
short var_18 = (short)30959;
short var_19 = (short)-3540;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)125;
unsigned char var_23 = (unsigned char)137;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)33;
unsigned int var_26 = 589940151U;
signed char var_27 = (signed char)12;
unsigned int var_28 = 1445351203U;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 2222371708U;
unsigned int var_31 = 541675940U;
_Bool var_32 = (_Bool)1;
unsigned short var_33 = (unsigned short)36269;
unsigned short arr_5 [10] ;
_Bool arr_6 [10] ;
int arr_10 [10] [10] ;
unsigned long long int arr_11 [10] ;
unsigned int arr_14 [10] [10] ;
long long int arr_19 [10] ;
short arr_20 [10] [10] ;
unsigned char arr_21 [10] ;
unsigned short arr_30 [19] [19] [19] [19] ;
unsigned short arr_31 [19] ;
long long int arr_44 [19] [19] ;
int arr_49 [19] [19] ;
short arr_58 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)16488;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 1627601066;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 6369029692281831565ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 132532672U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = -7085959732291734454LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (short)6952;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)17305 : (unsigned short)30171;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47843 : (unsigned short)45949;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? -7335985654253468902LL : -4831807863011828321LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? -200440598 : 2094328363;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)16430 : (short)-22660;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
