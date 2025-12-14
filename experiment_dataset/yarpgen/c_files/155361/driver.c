#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 11079020668374096347ULL;
unsigned short var_9 = (unsigned short)32193;
unsigned short var_10 = (unsigned short)34706;
int var_11 = 456908680;
int zero = 0;
long long int var_12 = -2616878608712708343LL;
unsigned char var_13 = (unsigned char)203;
long long int var_14 = 7712862312656740323LL;
short var_15 = (short)-15788;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9957245963666346645ULL;
unsigned long long int var_18 = 16384568634906526702ULL;
int var_19 = -455121533;
unsigned short arr_0 [21] ;
long long int arr_2 [21] ;
unsigned long long int arr_3 [18] [18] ;
unsigned long long int arr_4 [18] ;
unsigned long long int arr_7 [23] ;
_Bool arr_11 [23] [23] ;
unsigned short arr_5 [18] ;
unsigned long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)39742;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6670373340520789767LL : -8229400804272618481LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 15809878286229052048ULL : 16726008457018937170ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2477407157008324230ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 17386613139799916010ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22903 : (unsigned short)6709;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 9334522408200323686ULL : 10863241086166188928ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
