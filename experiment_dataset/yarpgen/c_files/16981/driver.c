#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5396608453151419566LL;
int var_1 = 1495810298;
int var_2 = -491583309;
short var_4 = (short)12606;
unsigned char var_5 = (unsigned char)15;
unsigned short var_7 = (unsigned short)5718;
long long int var_9 = 2750051738357114628LL;
unsigned long long int var_10 = 8813726358282052541ULL;
int var_16 = -1754674399;
long long int var_18 = -329905666912525747LL;
unsigned short var_19 = (unsigned short)51796;
int zero = 0;
unsigned char var_20 = (unsigned char)166;
unsigned int var_21 = 936550669U;
int var_22 = -694083360;
long long int var_23 = 4051918278004980002LL;
unsigned long long int var_24 = 8272109131758342219ULL;
unsigned int var_25 = 442443287U;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)30970;
short var_28 = (short)23689;
long long int arr_0 [21] ;
long long int arr_1 [21] ;
long long int arr_2 [21] [21] ;
int arr_3 [21] ;
int arr_5 [21] [21] [21] ;
unsigned short arr_6 [21] ;
unsigned int arr_7 [21] ;
unsigned long long int arr_8 [21] [21] ;
int arr_10 [21] ;
unsigned int arr_12 [21] [21] ;
unsigned short arr_13 [21] [21] ;
signed char arr_4 [21] [21] ;
int arr_11 [21] ;
unsigned short arr_15 [21] [21] ;
long long int arr_16 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1411112398774876475LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -7766995153110796456LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -403875255914465362LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1427502045;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -403759549;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)50289;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 669497453U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 13029293219935494709ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -299362266;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 1234832122U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)36122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 1723801455;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)21871;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 8369902914126964212LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
