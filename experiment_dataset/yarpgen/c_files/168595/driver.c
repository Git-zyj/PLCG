#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5648147951027802693ULL;
int var_2 = 361670950;
unsigned char var_3 = (unsigned char)234;
unsigned short var_5 = (unsigned short)18545;
long long int var_6 = 4878784304910912471LL;
signed char var_7 = (signed char)-100;
unsigned long long int var_10 = 3994464252094882428ULL;
unsigned short var_11 = (unsigned short)24599;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
unsigned long long int var_14 = 1466052356642529649ULL;
unsigned long long int var_15 = 6147345699435032482ULL;
int var_16 = 208487578;
unsigned short var_17 = (unsigned short)62864;
int var_18 = -677453981;
signed char var_19 = (signed char)-121;
short var_20 = (short)28439;
_Bool var_21 = (_Bool)0;
short var_22 = (short)31520;
unsigned char var_23 = (unsigned char)28;
unsigned int arr_0 [14] ;
unsigned long long int arr_4 [14] ;
short arr_5 [14] ;
unsigned long long int arr_6 [14] ;
_Bool arr_9 [20] ;
int arr_13 [20] [20] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_7 [14] ;
_Bool arr_8 [14] ;
unsigned char arr_14 [20] [20] ;
int arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 790571766U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 15818363214369199349ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)16527;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 18174294434693916985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1723907906 : 1580320898;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)18754;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 7640764779906786782ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2081004703 : 1240982422;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
