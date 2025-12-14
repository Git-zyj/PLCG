#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1486393120;
unsigned char var_2 = (unsigned char)151;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 4171286093U;
unsigned short var_7 = (unsigned short)44588;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)115;
int zero = 0;
unsigned short var_14 = (unsigned short)60317;
signed char var_15 = (signed char)52;
signed char var_16 = (signed char)67;
unsigned long long int var_17 = 5430250665940449524ULL;
long long int arr_0 [17] ;
int arr_1 [17] ;
long long int arr_3 [15] ;
_Bool arr_5 [15] ;
long long int arr_8 [20] ;
unsigned short arr_2 [17] ;
int arr_6 [15] ;
unsigned int arr_7 [15] ;
long long int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1614148611869049446LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -834340789;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -8135540830887510849LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 8355949498306949573LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)51387;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -492901826;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 350962126U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -4884404557640148459LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
