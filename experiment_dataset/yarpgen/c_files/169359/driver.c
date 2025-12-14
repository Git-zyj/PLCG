#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1261811066;
long long int var_1 = -8055212863286151223LL;
long long int var_2 = 1333698057416545265LL;
long long int var_3 = -5228369100905716452LL;
long long int var_4 = -2675049051537046762LL;
long long int var_7 = 6656685211823754001LL;
unsigned int var_9 = 1035847306U;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)16056;
unsigned int var_16 = 2458387258U;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)2019;
int zero = 0;
long long int var_20 = -6270569622767722480LL;
unsigned int var_21 = 4180823159U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 8469813525349925324ULL;
int var_24 = 944310786;
unsigned int var_25 = 2204503220U;
long long int var_26 = 6613792245309543334LL;
long long int var_27 = 743479923034705874LL;
int var_28 = 726665711;
_Bool arr_0 [12] ;
_Bool arr_2 [12] [12] ;
unsigned long long int arr_8 [16] [16] ;
int arr_10 [16] ;
unsigned long long int arr_11 [16] [16] ;
unsigned int arr_12 [16] ;
long long int arr_14 [16] [16] ;
_Bool arr_15 [16] [16] [16] ;
unsigned int arr_3 [12] ;
_Bool arr_6 [11] [11] ;
int arr_7 [11] ;
_Bool arr_17 [16] [16] [16] ;
long long int arr_18 [16] ;
short arr_21 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 6885098853768312487ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -965940780;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 4315653073830186698ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 4047728826U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = -4674014643862351430LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2453589773U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 1510160092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -4433855266612751848LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-30571;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
