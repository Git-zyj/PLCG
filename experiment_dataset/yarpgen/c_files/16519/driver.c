#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-19038;
unsigned int var_2 = 647412955U;
unsigned char var_3 = (unsigned char)151;
signed char var_4 = (signed char)13;
unsigned long long int var_7 = 1588644627906747533ULL;
signed char var_8 = (signed char)-29;
unsigned int var_9 = 2047882572U;
int zero = 0;
unsigned long long int var_10 = 9817999497696108960ULL;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_12 = 17832857609018847093ULL;
int var_13 = -1365073957;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11708252546863007539ULL;
unsigned int var_16 = 3968076069U;
int var_17 = 2133173709;
unsigned int var_18 = 1206120998U;
unsigned char var_19 = (unsigned char)52;
unsigned int var_20 = 1437719577U;
signed char var_21 = (signed char)-23;
unsigned int var_22 = 1558067621U;
short var_23 = (short)-19981;
short var_24 = (short)-23196;
unsigned char var_25 = (unsigned char)87;
short var_26 = (short)21779;
unsigned char var_27 = (unsigned char)20;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
signed char arr_4 [12] [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
long long int arr_7 [12] [12] [12] ;
long long int arr_11 [12] ;
unsigned short arr_19 [12] [12] [12] ;
short arr_23 [21] ;
signed char arr_24 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -6382676589587922885LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 949003110464751986ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3227884470U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2396724766785665783LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -130853396022048436LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)9204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (short)-15111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)103;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
