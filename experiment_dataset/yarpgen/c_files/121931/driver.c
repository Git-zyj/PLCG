#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 275630310U;
unsigned long long int var_1 = 12863209217221897138ULL;
unsigned short var_2 = (unsigned short)40663;
unsigned char var_3 = (unsigned char)236;
int var_4 = 1476887285;
int var_5 = -1113201916;
unsigned short var_6 = (unsigned short)27132;
short var_7 = (short)13129;
long long int var_8 = -2437337095484979084LL;
unsigned long long int var_9 = 7222025798868407847ULL;
unsigned int var_10 = 742136041U;
unsigned int var_11 = 3765830096U;
int zero = 0;
signed char var_12 = (signed char)-2;
unsigned long long int var_13 = 9093523635354583600ULL;
long long int var_14 = 43178522711692786LL;
long long int var_15 = -1286037530355161242LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-10225;
long long int var_18 = -8564254733507876316LL;
long long int var_19 = -6280746813135290292LL;
short var_20 = (short)-18077;
int var_21 = -1324148128;
long long int var_22 = -8202735957319625214LL;
int var_23 = 2106519553;
short var_24 = (short)24152;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned short arr_0 [24] ;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned long long int arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] ;
unsigned char arr_6 [24] ;
unsigned short arr_7 [24] [24] [24] [24] [24] ;
long long int arr_14 [15] [15] ;
unsigned int arr_15 [15] [15] ;
unsigned int arr_18 [15] [15] [15] ;
long long int arr_10 [24] [24] [24] [24] ;
_Bool arr_11 [24] [24] ;
signed char arr_12 [24] ;
_Bool arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)8364;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2719791385093330205ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 15826391498396399057ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)37842;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)29103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 5420443472425465362LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = 3788387216U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3587061158U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1230644404128513447LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
