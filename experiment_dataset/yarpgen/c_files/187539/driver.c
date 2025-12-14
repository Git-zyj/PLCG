#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6855248704886385171ULL;
unsigned int var_1 = 4128244426U;
int var_2 = 1279381217;
unsigned short var_3 = (unsigned short)46658;
int var_4 = 375532798;
int var_5 = 289960741;
short var_7 = (short)17429;
unsigned int var_10 = 247998569U;
short var_11 = (short)1027;
unsigned int var_12 = 2992262258U;
int zero = 0;
long long int var_15 = 4737750505012568556LL;
unsigned short var_16 = (unsigned short)23531;
unsigned int var_17 = 3615036540U;
unsigned char var_18 = (unsigned char)158;
int var_19 = -756478281;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)74;
int var_22 = 390412221;
unsigned short arr_0 [14] ;
signed char arr_3 [14] ;
unsigned short arr_5 [14] ;
_Bool arr_6 [14] [14] ;
unsigned int arr_7 [14] [14] ;
signed char arr_12 [22] ;
unsigned char arr_14 [22] ;
long long int arr_4 [14] ;
unsigned int arr_8 [14] [14] ;
_Bool arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)38431;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)49133;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 4117697622U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1202964441198122639LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 1780082573U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
