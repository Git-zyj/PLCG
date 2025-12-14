#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 9645045980717350119ULL;
unsigned char var_2 = (unsigned char)200;
short var_3 = (short)-18398;
unsigned char var_4 = (unsigned char)10;
unsigned long long int var_6 = 16300434638636786140ULL;
unsigned long long int var_7 = 8116515539255111756ULL;
signed char var_8 = (signed char)-31;
int var_9 = -2080060850;
short var_11 = (short)12517;
unsigned short var_12 = (unsigned short)6510;
int var_14 = -834071865;
int var_15 = 407901455;
short var_16 = (short)31769;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2235114710U;
int zero = 0;
signed char var_19 = (signed char)-125;
int var_20 = -1333123940;
int var_21 = -956624454;
unsigned char var_22 = (unsigned char)32;
unsigned long long int var_23 = 17820457861001682044ULL;
unsigned char var_24 = (unsigned char)171;
signed char var_25 = (signed char)-68;
short var_26 = (short)-1402;
unsigned long long int var_27 = 12332408316403145485ULL;
unsigned char var_28 = (unsigned char)81;
unsigned long long int var_29 = 11353357118392973299ULL;
unsigned long long int var_30 = 66156175783592748ULL;
unsigned long long int var_31 = 15548141445588514168ULL;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)123;
long long int arr_0 [12] ;
int arr_1 [12] [12] ;
unsigned short arr_3 [22] [22] ;
long long int arr_4 [22] ;
int arr_5 [22] [22] [22] ;
int arr_6 [22] [22] ;
long long int arr_7 [22] ;
unsigned short arr_8 [22] ;
unsigned char arr_9 [22] [22] ;
_Bool arr_11 [22] ;
_Bool arr_12 [22] [22] [22] ;
long long int arr_15 [22] ;
unsigned char arr_2 [12] ;
long long int arr_17 [22] [22] ;
unsigned long long int arr_18 [22] ;
int arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -737841933364395296LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -944544607;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)49174;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -333268321265978895LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1372058960;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -21171679;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2947454842529649297LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)63799;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 388600255423612849LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = -1309770563439722746LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 10620684570588938224ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = -905911669;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
