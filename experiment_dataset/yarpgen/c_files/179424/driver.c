#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11983248748463704307ULL;
signed char var_3 = (signed char)99;
unsigned short var_6 = (unsigned short)40232;
unsigned long long int var_7 = 17368827741525686172ULL;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2297613179U;
int var_16 = -461510447;
short var_17 = (short)23464;
int zero = 0;
unsigned long long int var_19 = 13407038919245992478ULL;
unsigned short var_20 = (unsigned short)21404;
int var_21 = 85257242;
unsigned int var_22 = 2285854294U;
short var_23 = (short)-97;
unsigned short var_24 = (unsigned short)18817;
unsigned short var_25 = (unsigned short)58552;
unsigned long long int var_26 = 16317338642226759356ULL;
unsigned short var_27 = (unsigned short)48625;
short var_28 = (short)-3534;
unsigned int var_29 = 2753451832U;
signed char var_30 = (signed char)-39;
int var_31 = -1616267501;
unsigned long long int var_32 = 16149253466767370365ULL;
_Bool var_33 = (_Bool)0;
_Bool arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
_Bool arr_3 [13] ;
unsigned long long int arr_4 [13] ;
unsigned short arr_7 [19] ;
_Bool arr_11 [19] ;
short arr_12 [19] ;
_Bool arr_2 [23] ;
short arr_5 [13] [13] ;
unsigned short arr_8 [19] ;
signed char arr_9 [19] [19] ;
short arr_31 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 10032044744614419524ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 11056678612349379977ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)14660;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (short)-27618;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)16664;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)60631;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)27492 : (short)32729;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
