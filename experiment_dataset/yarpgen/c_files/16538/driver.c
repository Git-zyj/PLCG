#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2900583297865871082LL;
long long int var_1 = 860856565381546101LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_4 = 232178340;
unsigned int var_5 = 90690972U;
unsigned int var_6 = 1276679950U;
int var_7 = -836703279;
long long int var_8 = -2469061817325732426LL;
long long int var_9 = -2835573879230846853LL;
unsigned char var_10 = (unsigned char)60;
unsigned char var_11 = (unsigned char)184;
signed char var_12 = (signed char)-64;
int var_13 = -497525990;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -2953735524814152469LL;
unsigned int var_16 = 162742330U;
unsigned char var_17 = (unsigned char)94;
signed char var_18 = (signed char)-108;
long long int var_19 = 8065569523652305275LL;
unsigned char var_20 = (unsigned char)55;
unsigned long long int var_21 = 2532403958673754127ULL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)218;
unsigned int var_24 = 3612270118U;
long long int var_25 = -2633334974069713390LL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)157;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)51;
unsigned long long int var_30 = 11869594537181408733ULL;
short var_31 = (short)-8605;
unsigned short var_32 = (unsigned short)36034;
unsigned int var_33 = 1631882680U;
_Bool var_34 = (_Bool)1;
long long int arr_0 [11] [11] ;
signed char arr_1 [11] [11] ;
signed char arr_3 [24] [24] ;
signed char arr_4 [24] ;
int arr_5 [24] ;
_Bool arr_6 [24] [24] ;
signed char arr_7 [24] [24] ;
long long int arr_10 [24] ;
unsigned char arr_16 [24] [24] [24] [24] ;
long long int arr_20 [24] [24] [24] [24] [24] ;
long long int arr_21 [24] [24] [24] [24] [24] ;
long long int arr_23 [24] [24] [24] ;
short arr_28 [24] [24] [24] [24] ;
unsigned short arr_2 [11] [11] ;
signed char arr_8 [24] ;
signed char arr_12 [24] [24] ;
unsigned char arr_32 [24] ;
long long int arr_33 [24] [24] [24] [24] [24] ;
unsigned int arr_34 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1241001291375890155LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -1059666495;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 4897382615360454867LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 3052962967378982446LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 2745972282429591078LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 6017228047536311828LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)11433 : (short)21665;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)50322;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -6810239166265708444LL : 6275256216403104768LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 1823180338U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
