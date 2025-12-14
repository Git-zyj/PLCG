#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 48036739U;
short var_1 = (short)10118;
unsigned int var_2 = 1140140259U;
unsigned char var_3 = (unsigned char)53;
unsigned short var_4 = (unsigned short)60247;
unsigned int var_5 = 266935051U;
unsigned char var_6 = (unsigned char)143;
short var_7 = (short)-27642;
unsigned long long int var_8 = 6846183057272389680ULL;
short var_9 = (short)-6448;
unsigned long long int var_10 = 16873764863968477259ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)17591;
signed char var_12 = (signed char)-107;
int var_13 = -568922925;
signed char var_14 = (signed char)-62;
signed char var_15 = (signed char)-125;
long long int var_16 = -495926960408480331LL;
int var_17 = -1128717241;
_Bool var_18 = (_Bool)0;
short var_19 = (short)13962;
unsigned char var_20 = (unsigned char)200;
signed char var_21 = (signed char)-25;
unsigned char var_22 = (unsigned char)54;
int var_23 = 900920178;
unsigned char var_24 = (unsigned char)66;
_Bool var_25 = (_Bool)0;
short var_26 = (short)27378;
unsigned char var_27 = (unsigned char)133;
int var_28 = -2028549774;
unsigned long long int var_29 = 16137586273198377487ULL;
short var_30 = (short)-2148;
int var_31 = -1772212796;
unsigned int var_32 = 2467210317U;
signed char var_33 = (signed char)-33;
unsigned long long int var_34 = 15902214951862700140ULL;
signed char var_35 = (signed char)44;
_Bool arr_0 [19] ;
int arr_1 [19] ;
signed char arr_2 [19] ;
signed char arr_8 [20] [20] ;
signed char arr_9 [20] [20] [20] [20] ;
int arr_18 [23] ;
int arr_20 [23] [23] [23] ;
unsigned int arr_21 [23] [23] ;
int arr_23 [23] [23] [23] ;
int arr_25 [23] ;
unsigned int arr_26 [23] [23] [23] ;
unsigned short arr_30 [23] [23] ;
short arr_37 [23] [23] [23] [23] [23] [23] [23] ;
int arr_3 [19] [19] ;
long long int arr_4 [19] ;
short arr_15 [15] ;
int arr_22 [23] ;
long long int arr_27 [23] [23] ;
unsigned char arr_40 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1354412335;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-62 : (signed char)-21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = -2142206843;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 903072103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = 2234606981U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -37681595;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 1065957238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 3180161208U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)10221;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)21308;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 985924325;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 6907187833155362359LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-31843 : (short)-27681;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1208883941 : -610322236;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = -4224072791489982341LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned char)155;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
