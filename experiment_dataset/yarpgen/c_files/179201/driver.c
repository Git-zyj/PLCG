#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1470155069;
short var_1 = (short)8197;
short var_2 = (short)-20150;
unsigned long long int var_3 = 3454712602320000001ULL;
unsigned int var_5 = 2895326146U;
unsigned char var_6 = (unsigned char)5;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3278911785U;
long long int var_10 = 1843607500168069553LL;
unsigned long long int var_11 = 13205878443109473012ULL;
int zero = 0;
unsigned long long int var_12 = 6258333740134963726ULL;
short var_13 = (short)-19529;
unsigned short var_14 = (unsigned short)65169;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)41843;
unsigned short var_17 = (unsigned short)5737;
unsigned short var_18 = (unsigned short)25584;
long long int var_19 = 4575923620774157926LL;
unsigned int var_20 = 3456938535U;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
long long int arr_2 [23] ;
_Bool arr_4 [18] ;
unsigned long long int arr_5 [18] ;
unsigned int arr_16 [10] [10] [10] ;
unsigned int arr_3 [23] ;
unsigned long long int arr_7 [18] ;
unsigned int arr_8 [18] [18] ;
_Bool arr_9 [18] ;
unsigned int arr_17 [10] ;
unsigned int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 6075519970064074842ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1180984721U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -7316327350746957176LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4312254618710030147ULL : 14364756595023682986ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1634760148U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1088839928U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8480316260726230746ULL : 16505709622057448728ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 387318352U : 4076278163U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1064239800U : 2637951000U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 4228944532U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
