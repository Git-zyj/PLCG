#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4929162991893474548LL;
unsigned int var_1 = 149898872U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 243433405U;
unsigned int var_4 = 3132594446U;
unsigned short var_5 = (unsigned short)59075;
_Bool var_6 = (_Bool)0;
int var_7 = -443239069;
unsigned long long int var_8 = 14431938607869555305ULL;
long long int var_9 = 7999280569383144331LL;
int var_10 = 5320611;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)1675;
short var_14 = (short)-5070;
int var_15 = 1606560709;
unsigned int var_16 = 3575331521U;
_Bool var_17 = (_Bool)1;
unsigned int arr_0 [16] ;
int arr_1 [16] ;
long long int arr_2 [16] [16] ;
long long int arr_3 [16] ;
short arr_4 [16] [16] [16] ;
unsigned int arr_5 [16] [16] [16] ;
unsigned int arr_6 [16] [16] [16] ;
unsigned int arr_7 [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
int arr_10 [14] ;
int arr_11 [14] [14] ;
unsigned int arr_12 [14] [14] ;
long long int arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1302923960U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -664455060;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1346247228758183956LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -6027315801693828576LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-5454;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3596153500U : 1687848003U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2917172476U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3590679342U : 2171575154U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 677238726;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -1909871288;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 2805855010U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3283321775590595430LL : 6752465892906834541LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
