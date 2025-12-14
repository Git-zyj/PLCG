#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 94627792U;
int var_2 = -908570073;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 70357050U;
unsigned short var_5 = (unsigned short)57533;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)72;
unsigned int var_11 = 3591142770U;
signed char var_12 = (signed char)29;
short var_13 = (short)22830;
unsigned short var_15 = (unsigned short)43339;
unsigned char var_16 = (unsigned char)70;
int var_17 = 1786969316;
int zero = 0;
unsigned int var_19 = 4045783285U;
unsigned short var_20 = (unsigned short)8711;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)36060;
signed char var_23 = (signed char)68;
long long int var_24 = -1235689065322675554LL;
signed char arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
_Bool arr_4 [13] [13] ;
unsigned int arr_5 [13] ;
long long int arr_3 [10] ;
unsigned char arr_6 [13] ;
int arr_7 [13] ;
unsigned short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)39684;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1456534234U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -79507869349110502LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -27868596;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)26414;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
