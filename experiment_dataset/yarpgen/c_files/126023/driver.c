#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
short var_2 = (short)-8744;
unsigned long long int var_3 = 14497274165641420483ULL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1585468903U;
unsigned char var_11 = (unsigned char)243;
long long int var_14 = 6422871893767835716LL;
unsigned int var_15 = 2182608750U;
int zero = 0;
long long int var_16 = 2973491094572311644LL;
long long int var_17 = -1314419632739477357LL;
short var_18 = (short)-20912;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-19557;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)221;
short var_26 = (short)7404;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned int arr_3 [11] ;
int arr_4 [11] ;
int arr_7 [11] ;
unsigned int arr_9 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] ;
short arr_11 [11] [11] [11] [11] ;
int arr_12 [11] [11] [11] [11] [11] [11] ;
_Bool arr_14 [11] ;
unsigned char arr_15 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3225285172U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3896945187U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4148582544U : 2593436995U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -1051531111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 651879811;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3306743714U : 3926066458U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 289676720507374001ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)6904;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1603045554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)235 : (unsigned char)206;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
