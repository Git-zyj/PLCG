#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_13 = -1358809056;
unsigned short var_14 = (unsigned short)49747;
unsigned long long int var_17 = 7134264473783779911ULL;
int zero = 0;
unsigned long long int var_18 = 12791179968224929760ULL;
unsigned int var_19 = 2039394046U;
unsigned long long int var_20 = 9588006811754333262ULL;
unsigned short var_21 = (unsigned short)22537;
long long int var_22 = -4164727293765090274LL;
_Bool var_23 = (_Bool)1;
_Bool arr_0 [13] ;
_Bool arr_1 [13] [13] ;
long long int arr_3 [13] ;
int arr_6 [13] ;
_Bool arr_23 [13] [13] ;
_Bool arr_25 [13] ;
unsigned long long int arr_4 [13] ;
short arr_5 [13] [13] ;
short arr_9 [13] ;
signed char arr_14 [13] ;
unsigned long long int arr_15 [13] ;
int arr_16 [13] ;
signed char arr_27 [13] [13] ;
unsigned int arr_28 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -4575271213912720108LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1020605995;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4468085893959619797ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12470;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-25319 : (short)-19347;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)103 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2147225101192044256ULL : 1972796262102859299ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1598459246 : 1200153712;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 3954262116U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
