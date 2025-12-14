#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned long long int var_1 = 12962244048812957227ULL;
unsigned long long int var_2 = 1088064245798726060ULL;
unsigned long long int var_3 = 14813079061018456835ULL;
signed char var_4 = (signed char)117;
signed char var_5 = (signed char)90;
signed char var_6 = (signed char)-17;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 13585381831489073222ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 1391857282;
signed char var_11 = (signed char)-79;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)25;
int zero = 0;
unsigned short var_16 = (unsigned short)3611;
_Bool var_17 = (_Bool)0;
int var_18 = -266286351;
int var_19 = 1136689102;
int var_20 = -1850484122;
int var_21 = 797987934;
signed char var_22 = (signed char)-72;
unsigned char var_23 = (unsigned char)114;
unsigned short var_24 = (unsigned short)12500;
unsigned long long int var_25 = 10016378182657579571ULL;
signed char var_26 = (signed char)24;
signed char var_27 = (signed char)101;
signed char var_28 = (signed char)-14;
unsigned long long int var_29 = 1867668229070273334ULL;
signed char var_30 = (signed char)62;
_Bool var_31 = (_Bool)1;
int var_32 = 1192348246;
int var_33 = 2086683926;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)10243;
signed char var_36 = (signed char)-15;
_Bool var_37 = (_Bool)1;
int arr_0 [17] ;
int arr_1 [17] ;
signed char arr_3 [12] ;
signed char arr_5 [14] ;
unsigned char arr_6 [14] ;
_Bool arr_8 [14] [14] ;
signed char arr_9 [14] [14] [14] ;
signed char arr_10 [14] [14] [14] ;
signed char arr_12 [14] [14] ;
unsigned char arr_13 [14] [14] ;
int arr_14 [14] [14] ;
int arr_16 [10] ;
int arr_17 [10] [10] ;
int arr_20 [10] ;
signed char arr_24 [10] [10] [10] [10] ;
unsigned short arr_26 [10] [10] ;
_Bool arr_2 [17] [17] ;
_Bool arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1974474122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 268502251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 280708783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 1119773423;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = 1881048568;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 1295185020;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)24368;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
