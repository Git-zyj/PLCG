#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4658281469682160197ULL;
unsigned short var_2 = (unsigned short)25357;
int var_3 = -1522405820;
int var_5 = -1754255479;
int var_6 = -1721443796;
unsigned long long int var_7 = 329058742807045385ULL;
long long int var_8 = -6047893993772575339LL;
int var_9 = 367280806;
int var_10 = 554692787;
int zero = 0;
int var_11 = 296101283;
unsigned char var_12 = (unsigned char)153;
unsigned short var_13 = (unsigned short)9744;
unsigned int var_14 = 3666005867U;
unsigned short var_15 = (unsigned short)35753;
unsigned int var_16 = 564515597U;
unsigned int var_17 = 2244851986U;
unsigned short var_18 = (unsigned short)30507;
long long int var_19 = -5219297377484302829LL;
unsigned char arr_0 [11] ;
signed char arr_1 [11] ;
int arr_2 [11] [11] ;
short arr_3 [11] ;
long long int arr_4 [11] [11] ;
int arr_7 [11] ;
int arr_11 [11] ;
unsigned char arr_16 [11] [11] [11] ;
long long int arr_23 [25] ;
long long int arr_24 [25] [25] ;
unsigned short arr_25 [25] [25] [25] ;
short arr_30 [12] [12] ;
unsigned char arr_31 [12] [12] ;
unsigned short arr_36 [12] [12] [12] [12] ;
int arr_5 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
short arr_14 [11] [11] [11] ;
int arr_21 [11] [11] [11] [11] ;
long long int arr_22 [11] [11] ;
long long int arr_27 [25] [25] [25] ;
int arr_28 [25] [25] [25] ;
short arr_29 [25] [25] ;
short arr_39 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1001270506;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-7731;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 6521836167033653163LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 741853010;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 2125756192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 3531155403973986452LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = 1293529845774285875LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)5830;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = (short)16019;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)245 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)23119 : (unsigned short)45996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -908405528;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 13121017874037042574ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)22825;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 351669640;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = 2655128613033634322LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -3831897046108349533LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -1585184966;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (short)-24490;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15823 : (short)-21731;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
