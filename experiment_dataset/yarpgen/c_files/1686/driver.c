#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33545;
unsigned short var_1 = (unsigned short)44572;
unsigned char var_2 = (unsigned char)162;
short var_3 = (short)13028;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_6 = 1622480609;
unsigned long long int var_7 = 8860603563174237201ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -2018628972;
_Bool var_10 = (_Bool)1;
short var_11 = (short)671;
signed char var_12 = (signed char)-41;
int var_13 = 770594102;
int var_14 = -414068296;
signed char var_15 = (signed char)49;
unsigned short var_16 = (unsigned short)60673;
unsigned short var_17 = (unsigned short)9142;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)77;
unsigned long long int var_20 = 3607479678228960811ULL;
short var_21 = (short)435;
long long int arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned short arr_6 [24] ;
_Bool arr_7 [24] ;
signed char arr_8 [24] [24] ;
long long int arr_2 [17] [17] ;
unsigned short arr_3 [17] ;
_Bool arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
short arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3454609565207010938LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)49136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -8786644120046510331LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)14486;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1712752733U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)3398;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
