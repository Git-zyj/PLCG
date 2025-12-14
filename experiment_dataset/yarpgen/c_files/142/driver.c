#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned long long int var_3 = 14201828382092980260ULL;
short var_6 = (short)17816;
unsigned long long int var_7 = 3283977305032468268ULL;
unsigned char var_8 = (unsigned char)163;
unsigned long long int var_9 = 8831585954643920358ULL;
unsigned long long int var_10 = 17246762483516748779ULL;
short var_12 = (short)-21245;
unsigned char var_13 = (unsigned char)234;
short var_14 = (short)5435;
short var_15 = (short)3439;
int zero = 0;
unsigned char var_18 = (unsigned char)97;
unsigned char var_19 = (unsigned char)251;
unsigned long long int var_20 = 947049496767849021ULL;
short var_21 = (short)16816;
unsigned long long int var_22 = 18052183775155359498ULL;
unsigned char var_23 = (unsigned char)134;
short var_24 = (short)-23089;
unsigned long long int var_25 = 6110784373436600034ULL;
unsigned char var_26 = (unsigned char)55;
short var_27 = (short)10251;
short var_28 = (short)19515;
unsigned long long int var_29 = 12701917287490815027ULL;
short var_30 = (short)26696;
short var_31 = (short)31558;
short var_32 = (short)23827;
unsigned long long int var_33 = 17149479948814110860ULL;
short var_34 = (short)104;
unsigned char var_35 = (unsigned char)249;
unsigned char var_36 = (unsigned char)2;
short arr_0 [13] ;
unsigned long long int arr_1 [13] ;
short arr_4 [20] ;
unsigned char arr_5 [20] [20] ;
short arr_7 [11] ;
unsigned long long int arr_8 [11] [11] ;
short arr_15 [11] ;
unsigned long long int arr_23 [10] ;
unsigned char arr_29 [10] [10] [10] [10] [10] ;
short arr_30 [10] [10] ;
short arr_2 [13] ;
short arr_6 [20] ;
unsigned char arr_9 [11] [11] ;
unsigned long long int arr_10 [11] ;
unsigned long long int arr_19 [11] ;
unsigned long long int arr_34 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)17822;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 10144173044446678651ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-26490;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)29735;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 10893019295493511657ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (short)29633;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 15622031734142049754ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (short)12621;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)32758;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)4178;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 5642774966712272051ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 2024767264884387185ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10667044975827425524ULL : 737787604167152099ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
