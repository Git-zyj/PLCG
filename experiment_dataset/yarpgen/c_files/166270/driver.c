#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5463292305088171724ULL;
short var_2 = (short)2868;
unsigned char var_3 = (unsigned char)171;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)20220;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)65232;
int var_11 = -1190301370;
unsigned int var_13 = 273375410U;
int zero = 0;
unsigned int var_16 = 1523408125U;
signed char var_17 = (signed char)-71;
signed char var_18 = (signed char)-121;
short var_19 = (short)-26989;
unsigned short var_20 = (unsigned short)24156;
int arr_0 [13] [13] ;
int arr_1 [13] [13] ;
_Bool arr_2 [13] ;
unsigned long long int arr_4 [13] ;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 126902180;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 433537142;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17874270647961286643ULL : 1646359382065710141ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 3735403647U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
