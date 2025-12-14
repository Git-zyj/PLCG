#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_12 = 5438421407958260357ULL;
signed char var_13 = (signed char)-85;
unsigned int var_14 = 3237856603U;
short var_15 = (short)-21359;
short var_16 = (short)-22101;
unsigned int var_17 = 1011486167U;
unsigned short var_18 = (unsigned short)57299;
unsigned char var_19 = (unsigned char)87;
_Bool var_20 = (_Bool)1;
int var_21 = -629039159;
long long int var_22 = -3608840532975880979LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)23110;
short var_25 = (short)27274;
int var_26 = 30300745;
long long int var_27 = 7639689302425180212LL;
long long int var_28 = -100218492570180465LL;
unsigned char var_29 = (unsigned char)31;
long long int var_30 = 598189620759252908LL;
unsigned short var_31 = (unsigned short)47548;
signed char var_32 = (signed char)79;
int var_33 = -2129525180;
int var_34 = 21314408;
int var_35 = -857091920;
unsigned long long int var_36 = 17204540162806831129ULL;
int var_37 = -185007109;
_Bool var_38 = (_Bool)0;
int var_39 = 1109316103;
unsigned char var_40 = (unsigned char)156;
unsigned int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
short arr_2 [22] [22] [22] ;
short arr_3 [22] [22] [22] ;
unsigned short arr_4 [22] [22] [22] [22] ;
unsigned int arr_5 [22] ;
short arr_6 [22] [22] [22] [22] ;
int arr_7 [22] ;
unsigned short arr_8 [22] [22] [22] ;
short arr_11 [22] ;
unsigned short arr_12 [22] [22] [22] ;
short arr_13 [22] [22] [22] ;
unsigned short arr_17 [22] [22] [22] [22] ;
unsigned long long int arr_18 [22] ;
long long int arr_21 [22] ;
int arr_23 [21] ;
unsigned char arr_28 [19] [19] ;
int arr_32 [19] [19] ;
unsigned int arr_35 [19] [19] [19] ;
int arr_36 [19] [19] ;
unsigned short arr_38 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2169942844U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)13969;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-21065;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47304;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 536596807U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-2181;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1641501894;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)22784;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)-2264;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)4959;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)17691;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)59114 : (unsigned short)33491;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 16898738015963455904ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 5696039264706716272LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = -2119950846;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_32 [i_0] [i_1] = -2033278662;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 4029554965U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_36 [i_0] [i_1] = 628812964;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = (unsigned short)56132;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
