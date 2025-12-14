#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 219286981U;
int var_4 = 2111384851;
unsigned short var_5 = (unsigned short)27974;
unsigned short var_6 = (unsigned short)51777;
unsigned char var_7 = (unsigned char)11;
unsigned int var_8 = 2861007286U;
unsigned char var_9 = (unsigned char)24;
long long int var_12 = 2431342081133923383LL;
unsigned int var_13 = 994672523U;
signed char var_16 = (signed char)-89;
int zero = 0;
unsigned int var_18 = 470153031U;
short var_19 = (short)251;
unsigned int var_20 = 3972093489U;
unsigned int var_21 = 1410759337U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)6581;
unsigned short var_24 = (unsigned short)2792;
signed char var_25 = (signed char)-45;
unsigned int var_26 = 3451113162U;
signed char var_27 = (signed char)-107;
short var_28 = (short)21186;
int var_29 = -1029809380;
int var_30 = 716692171;
int var_31 = -697086394;
short var_32 = (short)31668;
unsigned long long int var_33 = 9243585408782587744ULL;
unsigned short arr_0 [14] ;
long long int arr_3 [14] [14] [14] ;
int arr_4 [14] ;
unsigned char arr_5 [14] ;
unsigned long long int arr_7 [14] [14] ;
unsigned char arr_12 [14] [14] [14] [14] ;
unsigned long long int arr_13 [14] [14] [14] [14] ;
long long int arr_15 [14] [14] ;
int arr_17 [14] [14] [14] ;
unsigned int arr_8 [14] [14] ;
unsigned short arr_9 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)21512;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6152498538994232146LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 693504711;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 6865785837986753281ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 10163955275438135349ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = -8326862507047197100LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1375081985;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 2479053008U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)23013;
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
