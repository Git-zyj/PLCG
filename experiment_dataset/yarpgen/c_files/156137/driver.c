#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 777440714U;
unsigned char var_1 = (unsigned char)31;
unsigned int var_2 = 1016817639U;
_Bool var_3 = (_Bool)1;
int var_4 = -1728128737;
unsigned short var_5 = (unsigned short)3420;
unsigned short var_6 = (unsigned short)50704;
unsigned short var_7 = (unsigned short)60727;
unsigned short var_8 = (unsigned short)31545;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = -463139155;
unsigned long long int var_14 = 924707551893966426ULL;
unsigned char var_15 = (unsigned char)191;
unsigned short var_16 = (unsigned short)21712;
unsigned short var_17 = (unsigned short)39148;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)117;
unsigned long long int var_20 = 10507074808464101440ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3805057193U;
unsigned long long int var_23 = 3601703842223654448ULL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)229;
unsigned char var_26 = (unsigned char)210;
unsigned char var_27 = (unsigned char)107;
unsigned short var_28 = (unsigned short)10687;
unsigned char var_29 = (unsigned char)86;
unsigned char var_30 = (unsigned char)240;
unsigned long long int var_31 = 17429244707609262633ULL;
unsigned long long int var_32 = 5680498372543226940ULL;
unsigned int arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
int arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
unsigned char arr_8 [24] ;
unsigned int arr_9 [24] [24] ;
unsigned int arr_10 [24] [24] [24] ;
unsigned short arr_12 [24] [24] ;
int arr_16 [24] [24] ;
unsigned short arr_19 [24] [24] [24] [24] ;
short arr_20 [24] ;
unsigned short arr_27 [23] ;
unsigned short arr_4 [24] ;
unsigned char arr_7 [24] ;
unsigned long long int arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1919128065U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1210755690;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)28961;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 3449761591U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 738122152U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)38658;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 87027791;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16317;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (short)-27560;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (unsigned short)61328;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)4355;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 16872850895613880816ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
