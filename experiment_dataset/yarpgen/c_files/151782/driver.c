#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)48402;
short var_8 = (short)-11170;
unsigned short var_11 = (unsigned short)65518;
unsigned long long int var_12 = 5832626508461448578ULL;
int var_19 = 384251168;
int zero = 0;
unsigned int var_20 = 2769704321U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)223;
short var_23 = (short)24522;
unsigned short var_24 = (unsigned short)42791;
int var_25 = -497688148;
unsigned char var_26 = (unsigned char)100;
unsigned long long int var_27 = 4151217157123252566ULL;
unsigned short var_28 = (unsigned short)35161;
unsigned int var_29 = 954276372U;
unsigned char arr_0 [18] ;
unsigned int arr_1 [18] ;
long long int arr_6 [18] [18] ;
short arr_7 [18] [18] [18] ;
unsigned char arr_12 [18] ;
unsigned long long int arr_13 [18] ;
unsigned int arr_28 [18] ;
long long int arr_2 [18] ;
signed char arr_3 [18] ;
_Bool arr_11 [18] [18] [18] ;
unsigned short arr_14 [18] ;
unsigned long long int arr_15 [18] ;
int arr_24 [18] ;
unsigned long long int arr_30 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1305481483U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -7618372585130093352LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)21624;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 9168104576576064009ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = 313757605U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1704735495454770187LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)7215;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 4352406555488556411ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = -1586894614;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = 17373110869194324030ULL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
