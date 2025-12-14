#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39777;
long long int var_1 = 2465475895174655632LL;
unsigned short var_2 = (unsigned short)28564;
unsigned char var_4 = (unsigned char)165;
long long int var_5 = 1912650860801498216LL;
long long int var_6 = -4598773510024189261LL;
unsigned short var_7 = (unsigned short)57066;
unsigned long long int var_9 = 17127521383387564614ULL;
long long int var_11 = 1108347331335517002LL;
unsigned short var_12 = (unsigned short)35160;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 1060366686;
int var_16 = -322797652;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3892558176U;
short var_19 = (short)22056;
unsigned short var_20 = (unsigned short)18219;
int var_21 = 1651069577;
_Bool var_22 = (_Bool)1;
int var_23 = 2141530676;
unsigned char var_24 = (unsigned char)49;
unsigned char var_25 = (unsigned char)146;
unsigned long long int arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
int arr_3 [11] ;
unsigned short arr_4 [11] [11] [11] ;
long long int arr_9 [15] [15] ;
int arr_10 [15] ;
long long int arr_12 [15] [15] [15] [15] ;
_Bool arr_19 [11] ;
int arr_2 [11] ;
_Bool arr_5 [11] [11] ;
int arr_15 [15] ;
unsigned char arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 12611420939961256800ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 1004641568U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1768267251;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)3015;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = -2592315840591857728LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1871430707 : 410685909;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1168329336022436420LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -343027428 : -1278005709;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1824169943 : -1056036730;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)141;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
