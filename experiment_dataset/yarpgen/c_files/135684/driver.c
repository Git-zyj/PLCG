#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 10153226034784484591ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)33475;
unsigned short var_6 = (unsigned short)16712;
unsigned long long int var_7 = 6277226082032286516ULL;
unsigned long long int var_8 = 14647087434580653132ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)62239;
int zero = 0;
unsigned long long int var_13 = 8127625206968549072ULL;
unsigned long long int var_14 = 10307110727117282903ULL;
unsigned short var_15 = (unsigned short)27127;
unsigned long long int var_16 = 17837891157851809091ULL;
unsigned long long int var_17 = 18282037554377979418ULL;
unsigned short var_18 = (unsigned short)31619;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8440342066464333384ULL;
short var_21 = (short)5508;
short var_22 = (short)-11949;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)26369;
unsigned long long int var_25 = 3535081243719500441ULL;
unsigned long long int var_26 = 6371393621816780721ULL;
unsigned short var_27 = (unsigned short)54606;
unsigned long long int var_28 = 11290021905547997764ULL;
unsigned long long int var_29 = 107619951642950082ULL;
unsigned long long int var_30 = 4641807502742387365ULL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
_Bool arr_4 [10] ;
unsigned short arr_5 [10] [10] ;
unsigned long long int arr_8 [10] ;
unsigned long long int arr_9 [10] [10] ;
unsigned long long int arr_10 [10] [10] ;
unsigned long long int arr_11 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_14 [10] [10] [10] [10] [10] [10] ;
short arr_20 [11] ;
unsigned short arr_22 [11] [11] ;
unsigned long long int arr_6 [10] ;
unsigned long long int arr_15 [10] [10] [10] [10] [10] ;
unsigned long long int arr_23 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 10397455194276512845ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 2036225314582085139ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 192409529234769767ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)16321;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 4683831244049767479ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 9826490887071082670ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 3317279672415098544ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9399904023905650442ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12075525579569679064ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)-286;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)39680;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 14085470208957027062ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1320307101636265507ULL : 3537326170407593256ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = 11410776559921034515ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
