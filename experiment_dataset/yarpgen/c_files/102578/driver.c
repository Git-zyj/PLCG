#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1440601407551212810ULL;
short var_2 = (short)120;
unsigned long long int var_3 = 14296615609114169402ULL;
long long int var_4 = 8602666849166483747LL;
long long int var_5 = 451919550850121611LL;
unsigned int var_6 = 2929650801U;
long long int var_9 = -3567503440656934960LL;
int zero = 0;
long long int var_10 = 3276823619562304206LL;
unsigned long long int var_11 = 6775092030321405210ULL;
int var_12 = 230766817;
unsigned short var_13 = (unsigned short)51322;
short var_14 = (short)17825;
unsigned int var_15 = 4217100709U;
unsigned int var_16 = 532491293U;
unsigned int var_17 = 1947783962U;
long long int var_18 = 1392581061761025909LL;
long long int var_19 = 3771195079967367372LL;
long long int var_20 = 6220431110452015951LL;
signed char var_21 = (signed char)-103;
short var_22 = (short)-2354;
int var_23 = 1839299080;
long long int var_24 = -5486859275651171130LL;
int var_25 = -1788960757;
long long int var_26 = 165845333288470234LL;
unsigned int var_27 = 1417382586U;
unsigned char var_28 = (unsigned char)70;
short var_29 = (short)-21366;
short var_30 = (short)14779;
signed char var_31 = (signed char)114;
int var_32 = -1688067078;
unsigned long long int var_33 = 11363427371604027330ULL;
signed char var_34 = (signed char)-111;
short var_35 = (short)-4247;
unsigned long long int var_36 = 1406494127561958481ULL;
_Bool var_37 = (_Bool)0;
int var_38 = 1710654143;
unsigned long long int var_39 = 4389528463256498174ULL;
unsigned long long int var_40 = 8182319427446557321ULL;
unsigned int var_41 = 3672740908U;
short var_42 = (short)-27685;
int var_43 = -971518505;
int var_44 = 1354498201;
unsigned short var_45 = (unsigned short)50202;
short arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
unsigned short arr_3 [19] [19] ;
unsigned int arr_4 [19] [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
int arr_12 [23] ;
unsigned int arr_13 [23] [23] ;
signed char arr_15 [23] ;
unsigned long long int arr_16 [23] [23] ;
short arr_18 [23] [23] [23] [23] ;
unsigned int arr_20 [23] [23] [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] [23] [23] ;
signed char arr_22 [23] ;
short arr_23 [23] [23] ;
_Bool arr_27 [21] ;
long long int arr_28 [21] ;
long long int arr_29 [21] [21] [21] ;
int arr_32 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-17356;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1919269118U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)40565;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2685971381U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14632764346933892618ULL : 13758000766724481138ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 2066904150;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 3920639979U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 3454469960408834532ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-30982;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 167196939U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4532404041907416197LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-25 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (short)-25517;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 707113174804156310LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 61456644536998508LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_32 [i_0] [i_1] = -2127217970;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
