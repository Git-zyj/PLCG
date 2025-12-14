#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13344155742167150197ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_8 = 4035535781U;
unsigned long long int var_13 = 6430251130038249493ULL;
long long int var_14 = 5328934822620487264LL;
int var_16 = 159888915;
int zero = 0;
int var_18 = 2016627427;
long long int var_19 = -7917595863575476753LL;
unsigned char var_20 = (unsigned char)53;
long long int var_21 = -6095304486385488364LL;
_Bool var_22 = (_Bool)0;
long long int arr_1 [13] [13] ;
unsigned long long int arr_3 [13] [13] ;
long long int arr_5 [13] [13] ;
int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -7241882874859924576LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 5192043178398056610ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -7966593573398572652LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1774528305 : -388277957;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
