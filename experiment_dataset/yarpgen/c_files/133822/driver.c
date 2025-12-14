#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
_Bool var_2 = (_Bool)1;
long long int var_7 = 5858294843099140939LL;
unsigned char var_8 = (unsigned char)114;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)35140;
signed char var_13 = (signed char)126;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 15092922473309657386ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)101;
short var_21 = (short)-28783;
unsigned short var_22 = (unsigned short)35772;
signed char var_23 = (signed char)8;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)21865;
unsigned int var_26 = 3942175839U;
_Bool var_27 = (_Bool)1;
long long int var_28 = 9075312385366195231LL;
_Bool var_29 = (_Bool)0;
short var_30 = (short)26231;
unsigned int arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned short arr_4 [10] ;
int arr_5 [10] [10] ;
unsigned int arr_6 [10] [10] ;
signed char arr_10 [21] ;
unsigned short arr_12 [21] ;
_Bool arr_18 [21] [21] ;
_Bool arr_21 [21] ;
int arr_24 [21] [21] [21] [21] [21] ;
signed char arr_26 [21] [21] ;
unsigned short arr_2 [22] [22] ;
signed char arr_3 [22] ;
int arr_8 [10] ;
unsigned int arr_11 [21] ;
int arr_28 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 611607680U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)19693;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38413 : (unsigned short)14907;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -242728763 : -1109756989;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1724298540U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)30587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1281470880 : 1989278374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)16287;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -2063810753 : -1550230770;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 970331749U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = -1560684524;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
