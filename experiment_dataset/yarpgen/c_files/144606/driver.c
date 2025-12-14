#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16888146084620307759ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 16303597067221428671ULL;
unsigned long long int var_5 = 11442093932451238656ULL;
unsigned long long int var_6 = 15849352831874325789ULL;
unsigned long long int var_8 = 4232969474188214284ULL;
unsigned long long int var_9 = 1384215538972904352ULL;
short var_10 = (short)6325;
unsigned long long int var_16 = 2899141271674759716ULL;
long long int var_17 = 2098312269748655068LL;
unsigned long long int var_18 = 5980703243244362154ULL;
int zero = 0;
short var_20 = (short)-20668;
short var_21 = (short)-24258;
unsigned long long int var_22 = 18061631484955843481ULL;
unsigned long long int var_23 = 15503784749597897080ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = -1053724193164867346LL;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
long long int arr_2 [25] [25] ;
long long int arr_3 [25] ;
long long int arr_8 [13] ;
unsigned long long int arr_10 [13] [13] ;
short arr_11 [13] [13] ;
long long int arr_12 [13] ;
unsigned long long int arr_19 [13] [13] [13] [13] [13] ;
unsigned long long int arr_7 [25] ;
short arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 13643717615128856007ULL : 16735744804125268442ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 4142766332266240043LL : 835067889690215217LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 126621512186401391LL : 8040721863098113236LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -9161091630300074601LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 1599769311176589307ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)15206 : (short)28996;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 6969665146866973318LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 8399326721362584612ULL : 2383592310185879157ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 16280475508199959695ULL : 11500280332130982550ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26991 : (short)-12450;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
