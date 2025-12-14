#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28052;
_Bool var_1 = (_Bool)1;
short var_2 = (short)10027;
long long int var_3 = 4968121505938681100LL;
signed char var_4 = (signed char)-69;
int var_5 = -1609213933;
int var_6 = 1310237601;
int var_8 = -1906062360;
signed char var_9 = (signed char)-110;
unsigned long long int var_11 = 14110942729022156060ULL;
unsigned long long int var_13 = 4254026414509786852ULL;
unsigned short var_18 = (unsigned short)13376;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 17666511214923270722ULL;
unsigned long long int var_21 = 12113329380707749370ULL;
unsigned char var_22 = (unsigned char)59;
short var_23 = (short)11991;
int var_24 = -399380688;
unsigned short var_25 = (unsigned short)13071;
unsigned long long int var_26 = 15635192149045078459ULL;
unsigned long long int var_27 = 9192763028592020613ULL;
short arr_1 [18] ;
_Bool arr_2 [18] ;
long long int arr_7 [11] ;
unsigned char arr_8 [11] [11] [11] [11] ;
_Bool arr_9 [11] [11] ;
unsigned long long int arr_3 [18] [18] ;
unsigned char arr_10 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-12321;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 951053624464769539LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 9102521594414027927ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)150;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
