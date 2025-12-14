#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2021000486591459828LL;
long long int var_1 = -1487505365584532456LL;
unsigned char var_2 = (unsigned char)42;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)51587;
unsigned int var_6 = 680519718U;
long long int var_7 = -3535798313126082315LL;
unsigned short var_8 = (unsigned short)20718;
signed char var_10 = (signed char)-101;
int var_11 = -733570392;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
signed char var_13 = (signed char)-118;
unsigned short var_14 = (unsigned short)34081;
unsigned long long int var_15 = 11154575512521693879ULL;
unsigned short var_16 = (unsigned short)41310;
_Bool var_17 = (_Bool)0;
_Bool arr_0 [14] ;
long long int arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_4 [13] ;
unsigned long long int arr_9 [22] [22] ;
long long int arr_10 [22] ;
unsigned long long int arr_3 [14] [14] ;
signed char arr_8 [13] ;
_Bool arr_11 [22] [22] ;
long long int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 7468284428020359926LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)14125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1038818674298019320ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 6107770284308160726LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3049122503349805151ULL : 11200825973310755096ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2102052971765634126LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
