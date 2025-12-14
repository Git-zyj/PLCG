#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18271;
unsigned char var_1 = (unsigned char)125;
unsigned short var_2 = (unsigned short)16899;
unsigned char var_4 = (unsigned char)109;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-102;
unsigned char var_10 = (unsigned char)3;
unsigned char var_11 = (unsigned char)37;
int var_14 = 1720887349;
int var_15 = 1366868522;
unsigned char var_16 = (unsigned char)151;
signed char var_17 = (signed char)38;
signed char var_18 = (signed char)23;
int zero = 0;
signed char var_20 = (signed char)45;
int var_21 = -823409442;
unsigned short var_22 = (unsigned short)48831;
unsigned long long int var_23 = 12117820636676292333ULL;
short var_24 = (short)-24275;
signed char arr_0 [20] ;
_Bool arr_1 [20] [20] ;
int arr_2 [20] ;
unsigned char arr_3 [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 545965849;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 777274038359201628LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
