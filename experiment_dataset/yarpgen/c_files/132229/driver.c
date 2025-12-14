#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1500247617;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)76;
unsigned long long int var_7 = 713685823140297766ULL;
unsigned short var_9 = (unsigned short)23150;
unsigned int var_10 = 3661328618U;
long long int var_11 = 2082485324447230808LL;
unsigned int var_12 = 244621026U;
signed char var_16 = (signed char)-90;
int zero = 0;
signed char var_17 = (signed char)-107;
signed char var_18 = (signed char)-123;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-5;
_Bool var_21 = (_Bool)1;
int var_22 = 1403873182;
long long int var_23 = 4712537219109404841LL;
short var_24 = (short)19802;
short var_25 = (short)29701;
unsigned char var_26 = (unsigned char)154;
unsigned long long int arr_0 [15] [15] ;
long long int arr_1 [15] ;
unsigned char arr_4 [22] ;
unsigned int arr_5 [22] ;
unsigned long long int arr_7 [12] [12] ;
unsigned long long int arr_3 [15] ;
long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3707833132320614267ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1793754394714218097LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 4176018764U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 16999463641906540572ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8727573370549211781ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -6198442425558581082LL : -6435072347963821923LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
