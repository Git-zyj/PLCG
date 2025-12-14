#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-16421;
long long int var_5 = 8570891442077962792LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10145106460257615538ULL;
unsigned char var_10 = (unsigned char)2;
unsigned long long int var_11 = 3292508563347072660ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)250;
unsigned char var_16 = (unsigned char)184;
int zero = 0;
unsigned short var_18 = (unsigned short)22011;
long long int var_19 = -4267691791173382579LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-14827;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 10449631731051074599ULL;
unsigned long long int var_24 = 4683203895231591359ULL;
unsigned char var_25 = (unsigned char)127;
short var_26 = (short)-28653;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 4562198585779918622ULL;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)163;
_Bool var_32 = (_Bool)1;
long long int arr_0 [10] [10] ;
signed char arr_2 [10] [10] ;
unsigned char arr_4 [21] ;
long long int arr_5 [21] ;
int arr_6 [21] [21] ;
unsigned char arr_7 [21] ;
_Bool arr_9 [21] ;
int arr_11 [21] ;
long long int arr_12 [21] [21] [21] ;
long long int arr_17 [21] ;
_Bool arr_21 [21] [21] ;
long long int arr_3 [10] ;
short arr_14 [21] [21] [21] ;
int arr_15 [21] ;
_Bool arr_16 [21] ;
_Bool arr_19 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -3610004364253406229LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -1310827863670290999LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1584504710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -651873847;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -4406468254849004302LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = -1831015229681503786LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5816185160196345795LL : -513261757998431123LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)24159;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 1855034140;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
