#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1649381739U;
long long int var_3 = -871927199122868937LL;
unsigned char var_4 = (unsigned char)64;
long long int var_5 = -3398866687536824835LL;
unsigned long long int var_6 = 2370576281665448408ULL;
unsigned int var_7 = 3440809600U;
unsigned int var_8 = 312140785U;
unsigned short var_9 = (unsigned short)26134;
unsigned short var_14 = (unsigned short)19506;
unsigned int var_15 = 949882561U;
int zero = 0;
short var_16 = (short)6823;
long long int var_17 = -2135154132782967316LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)216;
short var_20 = (short)-5746;
unsigned long long int var_21 = 3390902700970609229ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)1336;
unsigned long long int var_24 = 9870416972412927576ULL;
long long int var_25 = -1784719224219144604LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = -8821528147526032790LL;
unsigned char var_28 = (unsigned char)174;
short var_29 = (short)-17865;
unsigned int var_30 = 209518194U;
unsigned char var_31 = (unsigned char)136;
unsigned short var_32 = (unsigned short)39369;
unsigned char var_33 = (unsigned char)68;
unsigned int var_34 = 2437060388U;
unsigned char var_35 = (unsigned char)168;
unsigned char var_36 = (unsigned char)76;
_Bool arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
int arr_3 [12] [12] [12] ;
_Bool arr_4 [12] [12] [12] ;
long long int arr_7 [12] ;
unsigned char arr_8 [12] ;
short arr_10 [12] ;
unsigned char arr_14 [12] ;
unsigned int arr_15 [12] [12] [12] ;
unsigned short arr_17 [10] [10] ;
long long int arr_20 [10] [10] [10] ;
unsigned short arr_26 [10] [10] [10] ;
signed char arr_29 [10] [10] [10] [10] ;
short arr_31 [10] ;
unsigned int arr_35 [25] ;
long long int arr_36 [25] ;
long long int arr_37 [25] [25] ;
unsigned int arr_2 [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
signed char arr_9 [12] ;
int arr_16 [12] [12] ;
long long int arr_19 [10] [10] ;
unsigned long long int arr_24 [10] ;
long long int arr_33 [10] [10] ;
short arr_34 [10] [10] ;
unsigned char arr_38 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 286410338;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -8532569239333302905LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)31330;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 397685322U : 3346325260U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)43556;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1520245959228434675LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)64160;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)22 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (short)4574 : (short)-18518;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 4224762121U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 4035370372796609054LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = -3714570535319915629LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1783295096U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1984069948U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 1371037537 : 1951506991;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 3096438182019600189LL : 4777864662078410967LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 13260973873522198094ULL : 5704525776897241577ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 4165443858463858861LL : 580647975964701977LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13943 : (short)29083;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (unsigned char)102;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
