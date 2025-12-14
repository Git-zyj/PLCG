#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1695369025549198677LL;
long long int var_1 = 7635877191800846952LL;
unsigned short var_3 = (unsigned short)9336;
unsigned int var_4 = 1091592139U;
long long int var_5 = 4129732739620228125LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)28649;
unsigned long long int var_8 = 11112440551030954392ULL;
unsigned short var_9 = (unsigned short)43717;
int var_11 = 1242733374;
long long int var_12 = -6842658070748784307LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 36580039401599116LL;
unsigned long long int var_15 = 11641202364150145454ULL;
long long int var_16 = 2638207966274728820LL;
int zero = 0;
long long int var_17 = 5851387399815231609LL;
unsigned int var_18 = 1767059939U;
short var_19 = (short)-2082;
int var_20 = 918447957;
long long int var_21 = 5281305963864114801LL;
short var_22 = (short)-24481;
unsigned long long int var_23 = 15562370961781926740ULL;
long long int var_24 = -9085301260666427766LL;
unsigned long long int var_25 = 14406475753244006931ULL;
unsigned short var_26 = (unsigned short)27893;
short arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
unsigned long long int arr_3 [21] ;
long long int arr_7 [21] [21] [21] ;
unsigned long long int arr_16 [11] ;
short arr_5 [21] ;
unsigned int arr_9 [21] ;
unsigned long long int arr_10 [21] ;
unsigned long long int arr_11 [21] [21] [21] ;
unsigned long long int arr_12 [21] ;
_Bool arr_15 [11] ;
unsigned char arr_19 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-30681;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 6358670822956295250ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2139151804682771043LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = 13937270661819037094ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-70 : (short)25537;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4257016466U : 992345137U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 6245102373404091493ULL : 3033505036282330665ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11090480976754078352ULL : 15501972741184045105ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3774227257417319307ULL : 7228866374109617906ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)220;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
