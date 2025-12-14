#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)95;
long long int var_4 = -24500065617053457LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_8 = -7337317713123734023LL;
unsigned long long int var_10 = 8696184331228620928ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3163009557889702632ULL;
int var_14 = 1357369118;
unsigned long long int var_15 = 7258649936039379581ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1007681087;
unsigned short var_22 = (unsigned short)24288;
unsigned int var_23 = 1544399820U;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)64;
unsigned char var_26 = (unsigned char)214;
unsigned int var_27 = 2456367127U;
unsigned short var_28 = (unsigned short)36572;
unsigned char var_29 = (unsigned char)70;
unsigned char arr_0 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned int arr_4 [24] ;
_Bool arr_5 [24] [24] [24] ;
unsigned int arr_8 [24] [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] ;
unsigned short arr_10 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 198338992U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 69736160U : 3410229877U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)97 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)51326 : (unsigned short)25902;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
