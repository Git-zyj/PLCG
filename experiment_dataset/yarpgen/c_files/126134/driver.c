#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1455278698;
long long int var_1 = -1070756142562673946LL;
long long int var_2 = 3128017854337548997LL;
short var_3 = (short)-30557;
signed char var_4 = (signed char)-21;
long long int var_5 = 2786419039826856259LL;
int var_7 = 1587436965;
unsigned long long int var_8 = 3569962641822211496ULL;
long long int var_9 = -7839566227336414741LL;
unsigned long long int var_10 = 1360003753499764780ULL;
unsigned char var_11 = (unsigned char)155;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 2181844984491577371LL;
unsigned char var_16 = (unsigned char)196;
short var_17 = (short)-11874;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3650003568128320995ULL;
unsigned int var_20 = 3516149149U;
int var_21 = -98542083;
unsigned short var_22 = (unsigned short)34631;
long long int var_23 = -186397295130640827LL;
signed char var_24 = (signed char)49;
unsigned short var_25 = (unsigned short)16471;
_Bool var_26 = (_Bool)1;
long long int var_27 = 4963288682532706452LL;
long long int var_28 = 2139090686148923555LL;
unsigned long long int var_29 = 6558774978326964998ULL;
long long int var_30 = 765550510414336978LL;
unsigned short var_31 = (unsigned short)14439;
long long int var_32 = 733898363170995367LL;
long long int var_33 = -3663921916413631298LL;
unsigned long long int var_34 = 600069797439828280ULL;
short var_35 = (short)9591;
unsigned short var_36 = (unsigned short)60464;
unsigned int var_37 = 2039194487U;
short var_38 = (short)-13195;
unsigned int var_39 = 2274715356U;
long long int var_40 = -1963061442671929377LL;
unsigned char var_41 = (unsigned char)126;
long long int var_42 = -4907177557860913519LL;
_Bool var_43 = (_Bool)1;
long long int var_44 = 5914793815068561156LL;
short arr_0 [19] ;
short arr_1 [19] ;
_Bool arr_3 [19] [19] ;
unsigned short arr_5 [19] ;
unsigned char arr_8 [19] [19] [19] ;
unsigned char arr_9 [19] [19] [19] ;
unsigned char arr_11 [19] [19] [19] ;
unsigned short arr_13 [19] [19] [19] [19] ;
_Bool arr_14 [19] [19] [19] [19] [19] [19] ;
short arr_15 [19] [19] [19] [19] ;
signed char arr_18 [19] [19] [19] [19] [19] ;
long long int arr_19 [19] [19] [19] ;
short arr_21 [23] [23] ;
int arr_22 [23] ;
int arr_23 [11] ;
long long int arr_27 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)11079;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)13069;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)63657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38337;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)6251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1657584539731758916LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (short)12218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = -343405981;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = -1284593739;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 8384289822652649341LL;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
