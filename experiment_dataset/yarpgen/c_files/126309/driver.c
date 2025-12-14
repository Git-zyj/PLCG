#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3773932372U;
unsigned short var_5 = (unsigned short)47659;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3655657499U;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)46482;
int zero = 0;
unsigned int var_13 = 137158000U;
signed char var_14 = (signed char)53;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)8635;
unsigned short var_17 = (unsigned short)17269;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)30960;
signed char var_20 = (signed char)78;
long long int var_21 = -7835461999073993480LL;
unsigned long long int var_22 = 8044419147858262055ULL;
unsigned short var_23 = (unsigned short)19558;
unsigned short arr_0 [23] ;
int arr_1 [23] ;
unsigned int arr_2 [23] [23] ;
signed char arr_9 [23] ;
int arr_6 [23] ;
long long int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)65115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1863946393;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3327291544U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1773116844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 4250419723479903482LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
