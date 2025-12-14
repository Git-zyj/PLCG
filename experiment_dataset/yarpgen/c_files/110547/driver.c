#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2562367475U;
long long int var_2 = -1963111576149621827LL;
unsigned char var_5 = (unsigned char)109;
long long int var_6 = 6818996097669801476LL;
long long int var_8 = -1282214308111042198LL;
long long int var_9 = -9183328005963145362LL;
unsigned long long int var_10 = 11703022718963391780ULL;
unsigned short var_12 = (unsigned short)38417;
unsigned long long int var_15 = 1206083468073128988ULL;
int zero = 0;
signed char var_16 = (signed char)-70;
long long int var_17 = -3801531423073862132LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 7423021573510420081LL;
unsigned long long int var_20 = 16805491726110968552ULL;
int var_21 = -1728213349;
unsigned long long int var_22 = 8747360569761469089ULL;
_Bool arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_2 [18] [18] ;
long long int arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
long long int arr_7 [22] ;
int arr_8 [22] [22] ;
long long int arr_5 [18] ;
unsigned short arr_6 [18] ;
short arr_9 [22] ;
unsigned int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 994726040U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33497;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -4793056996462622175LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 591895472U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 4867517259585066044LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = -1788596934;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -6581933446455084089LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)50850;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)-3123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 351401019U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
