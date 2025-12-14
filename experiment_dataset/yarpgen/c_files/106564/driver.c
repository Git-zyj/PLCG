#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1424569727U;
long long int var_3 = 874478588707354598LL;
signed char var_4 = (signed char)91;
unsigned short var_6 = (unsigned short)61466;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)97;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4171611399U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-44;
unsigned short var_16 = (unsigned short)5051;
unsigned long long int var_17 = 8474257607740169235ULL;
int zero = 0;
long long int var_19 = 8298239347844884136LL;
unsigned long long int var_20 = 16551239069004119836ULL;
unsigned long long int var_21 = 15075880830982416591ULL;
signed char var_22 = (signed char)-16;
long long int var_23 = -1139878910130376669LL;
unsigned char var_24 = (unsigned char)166;
_Bool arr_0 [21] [21] ;
long long int arr_2 [21] ;
_Bool arr_3 [21] ;
long long int arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned int arr_7 [21] [21] [21] [21] ;
long long int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 6003859332809201812LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 2223892927672734126LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)45352;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1363435762U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = -3804880688385941037LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
