#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2163054551U;
unsigned char var_2 = (unsigned char)181;
signed char var_3 = (signed char)30;
short var_4 = (short)-1155;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)82;
long long int var_8 = -9182553951534759567LL;
long long int var_10 = -7780029342716381538LL;
unsigned short var_11 = (unsigned short)8569;
short var_13 = (short)-14451;
unsigned int var_16 = 634669001U;
unsigned int var_18 = 4052320915U;
int zero = 0;
short var_20 = (short)29648;
signed char var_21 = (signed char)113;
int var_22 = -1625522994;
signed char var_23 = (signed char)-62;
int var_24 = 1246099584;
signed char var_25 = (signed char)-32;
unsigned char var_26 = (unsigned char)244;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)212;
long long int var_29 = -2552318501349094370LL;
long long int var_30 = -2933092572970320196LL;
_Bool var_31 = (_Bool)1;
short arr_0 [18] ;
int arr_1 [18] ;
signed char arr_2 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned char arr_5 [18] ;
signed char arr_6 [18] [18] [18] [18] ;
signed char arr_7 [18] [18] [18] ;
short arr_8 [18] [18] [18] [18] ;
unsigned char arr_9 [18] [18] ;
int arr_10 [18] [18] [18] ;
unsigned char arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)24255 : (short)-19121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2091929876 : -502298042;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)16 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-4 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-7756;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1323700557 : -1072766070;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned char)126;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
