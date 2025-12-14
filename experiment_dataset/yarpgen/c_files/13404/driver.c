#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -865689164;
signed char var_1 = (signed char)-74;
unsigned char var_2 = (unsigned char)93;
unsigned long long int var_3 = 16924781366680370476ULL;
int var_4 = -1095625646;
short var_6 = (short)822;
int var_8 = -459222651;
short var_9 = (short)5812;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-19811;
short var_15 = (short)22632;
unsigned long long int var_16 = 10010910041588056141ULL;
unsigned char var_17 = (unsigned char)202;
signed char var_18 = (signed char)90;
_Bool var_19 = (_Bool)1;
int var_20 = 1220642373;
long long int arr_1 [23] ;
signed char arr_3 [14] ;
_Bool arr_7 [22] ;
_Bool arr_9 [22] ;
_Bool arr_13 [22] [22] ;
signed char arr_5 [14] ;
int arr_10 [22] ;
unsigned short arr_11 [22] ;
short arr_16 [22] [22] ;
_Bool arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 2557071263291752658LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)26 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 60055545;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)27220;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (short)27676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
