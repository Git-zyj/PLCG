#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13506187055397555555ULL;
int var_4 = 1765876123;
unsigned long long int var_5 = 12725503364325544292ULL;
unsigned char var_8 = (unsigned char)99;
unsigned char var_9 = (unsigned char)189;
int var_10 = -382419055;
int zero = 0;
signed char var_13 = (signed char)-55;
unsigned int var_14 = 241407577U;
long long int var_15 = -1700452265973914451LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)123;
long long int var_18 = 1829473268117529207LL;
signed char arr_0 [14] ;
unsigned short arr_1 [14] ;
unsigned int arr_3 [14] [14] ;
signed char arr_4 [14] [14] [14] ;
int arr_5 [14] [14] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)28240;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 3679479932U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -1158211809;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1556067126;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
