#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 421890981;
long long int var_1 = -5451050229279199721LL;
unsigned short var_2 = (unsigned short)23645;
short var_4 = (short)-17778;
long long int var_5 = -2195923670410904222LL;
short var_6 = (short)-20562;
unsigned long long int var_7 = 12425208326283258877ULL;
int var_9 = -1445623768;
unsigned int var_10 = 506262859U;
int var_11 = -307264211;
long long int var_13 = -6997132624893537208LL;
short var_14 = (short)-15101;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
unsigned char var_17 = (unsigned char)90;
unsigned short var_18 = (unsigned short)11036;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)8579;
unsigned char var_21 = (unsigned char)207;
unsigned char var_22 = (unsigned char)18;
unsigned long long int var_23 = 127282350540449475ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
long long int var_26 = -1115174931020238575LL;
unsigned long long int var_27 = 618612882117855980ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 5104702593321864292ULL;
unsigned short arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_2 [20] ;
unsigned long long int arr_3 [20] [20] ;
int arr_4 [20] [20] [20] ;
_Bool arr_5 [20] [20] ;
signed char arr_9 [20] [20] ;
unsigned short arr_10 [20] [20] ;
short arr_11 [20] ;
int arr_14 [20] ;
unsigned long long int arr_15 [20] [20] [20] ;
unsigned short arr_16 [20] [20] ;
int arr_21 [20] [20] ;
long long int arr_6 [20] ;
long long int arr_7 [20] ;
int arr_8 [20] ;
_Bool arr_12 [20] ;
unsigned short arr_13 [20] ;
unsigned long long int arr_18 [20] [20] [20] ;
short arr_19 [20] [20] ;
long long int arr_23 [20] ;
int arr_24 [20] [20] ;
unsigned char arr_25 [20] ;
unsigned long long int arr_26 [20] [20] ;
unsigned long long int arr_33 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16818;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 10579294392247333998ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 5304918767079450937ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2036725249;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)45361;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)-3038;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -1360578454 : 1752790941;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 9268595135750998091ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)18581;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = 719551756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 5305194258754782177LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 8108101721992508753LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -757426762;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55654 : (unsigned short)17258;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6677594447099988492ULL : 6928704364809286505ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)6240 : (short)-2215;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 3689461931387249914LL : -6136386810714320839LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 621463985 : -425967945;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)36 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 13822130631133953362ULL : 14797318784195908052ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 4168363474308309587ULL : 12509691799053116335ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
