#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-110;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17390236621514243016ULL;
short var_5 = (short)-28508;
long long int var_6 = 8117423256250589525LL;
unsigned long long int var_7 = 7938854003526508969ULL;
long long int var_8 = -1554267227888354101LL;
unsigned int var_9 = 3661304012U;
unsigned short var_10 = (unsigned short)5260;
long long int var_11 = -5114837102989712263LL;
long long int var_12 = -2686072946688433783LL;
int zero = 0;
short var_14 = (short)11360;
short var_15 = (short)-12890;
signed char var_16 = (signed char)67;
unsigned long long int var_17 = 846312280569181628ULL;
short var_18 = (short)-5133;
unsigned short var_19 = (unsigned short)63780;
unsigned char var_20 = (unsigned char)103;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8119329817473479480ULL;
unsigned long long int var_23 = 6481320870833817880ULL;
int var_24 = -888877139;
int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
int arr_6 [12] ;
short arr_8 [12] [12] [12] ;
long long int arr_10 [12] [12] [12] ;
unsigned long long int arr_12 [22] ;
unsigned int arr_13 [22] ;
unsigned long long int arr_14 [22] ;
unsigned char arr_3 [17] ;
unsigned char arr_11 [12] ;
unsigned int arr_15 [22] ;
short arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 127341399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2231151363U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1273672012 : 1643404076;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)6136;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6291435896078358672LL : -8519647865058897931LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 13246699248711226314ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 3502399288U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 9525602023718513715ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3026193169U : 990019311U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)4320 : (short)2473;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
