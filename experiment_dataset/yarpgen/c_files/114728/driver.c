#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -635580503;
long long int var_6 = -3780801656685874984LL;
long long int var_7 = -6742123955275966122LL;
long long int var_12 = 1093527337797736108LL;
unsigned int var_18 = 3900568540U;
unsigned int var_19 = 3439884031U;
int zero = 0;
unsigned long long int var_20 = 15503287796647614743ULL;
unsigned long long int var_21 = 2468670591646519627ULL;
unsigned long long int var_22 = 7091802123164589699ULL;
unsigned long long int var_23 = 2533829794637221372ULL;
long long int var_24 = -2826813809329941158LL;
short var_25 = (short)4922;
int var_26 = 1884037357;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned char arr_5 [23] [23] ;
unsigned int arr_6 [23] ;
long long int arr_7 [23] ;
int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 8118576626497756363LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 16980327313559676666ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3080586112U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 4587591026048411197LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1846682513;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6049572986286033659ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
