#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5875347840050752081LL;
unsigned short var_1 = (unsigned short)40218;
unsigned int var_2 = 2543037568U;
unsigned int var_3 = 3217632773U;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-90;
unsigned char var_7 = (unsigned char)76;
long long int var_9 = 3620480446196986044LL;
long long int var_10 = -7499293269402848770LL;
int zero = 0;
unsigned int var_11 = 3664084180U;
long long int var_12 = 1964299922499719897LL;
unsigned short var_13 = (unsigned short)63754;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)144;
int var_16 = -1258410426;
unsigned char var_17 = (unsigned char)22;
signed char var_18 = (signed char)-99;
unsigned char var_19 = (unsigned char)55;
unsigned int var_20 = 261203054U;
unsigned short var_21 = (unsigned short)4009;
unsigned char arr_0 [19] ;
short arr_1 [19] ;
unsigned long long int arr_3 [16] ;
unsigned char arr_4 [16] ;
long long int arr_6 [21] [21] ;
_Bool arr_7 [21] ;
unsigned short arr_9 [24] ;
unsigned int arr_5 [16] ;
signed char arr_8 [21] [21] ;
signed char arr_11 [24] ;
unsigned char arr_12 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)4456;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 6053201146772184214ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 3187537496197439764LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)47375;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2081409397U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)139;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
