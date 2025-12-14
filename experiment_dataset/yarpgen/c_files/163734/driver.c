#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_15 = -1269696509;
int zero = 0;
unsigned long long int var_20 = 11020392410642970233ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4651819504434636943LL;
unsigned long long int var_24 = 2167957484236519713ULL;
unsigned char arr_0 [13] ;
int arr_1 [13] ;
int arr_3 [13] [13] ;
long long int arr_8 [23] [23] ;
long long int arr_9 [23] ;
int arr_11 [23] ;
long long int arr_13 [18] ;
unsigned char arr_14 [18] ;
_Bool arr_15 [18] [18] ;
unsigned long long int arr_4 [13] [13] ;
unsigned char arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned char arr_7 [13] ;
unsigned long long int arr_12 [23] ;
long long int arr_18 [18] [18] ;
unsigned long long int arr_19 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -150080119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -1814628176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -4720684169848123019LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -4643452868411104076LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -1007525509;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -6295011293573734053LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 11333850838499565428ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 12233313467630637887ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 16561804632103136326ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 6310480624111367967LL : -7410541053933636621LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 6090922378916558975ULL : 17160394481547328316ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
