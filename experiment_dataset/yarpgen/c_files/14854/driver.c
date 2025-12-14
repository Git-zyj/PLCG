#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1216582336;
unsigned int var_2 = 1109870228U;
short var_3 = (short)1983;
unsigned char var_4 = (unsigned char)202;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)69;
int var_8 = -629549883;
unsigned short var_9 = (unsigned short)16254;
long long int var_10 = -8206592924732015270LL;
int zero = 0;
long long int var_11 = -557891389080881867LL;
long long int var_12 = 3794864743317987528LL;
unsigned long long int var_13 = 13074587043106280419ULL;
signed char var_14 = (signed char)36;
unsigned char var_15 = (unsigned char)49;
signed char arr_1 [17] [17] ;
signed char arr_3 [17] [17] ;
unsigned long long int arr_8 [14] ;
signed char arr_11 [18] ;
unsigned long long int arr_5 [17] ;
long long int arr_9 [14] ;
unsigned char arr_12 [18] ;
unsigned char arr_13 [18] [18] ;
long long int arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 11980837947557950575ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5220155893533050937ULL : 1211883519555523415ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 5634543237511251900LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 6870996405857853139LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
