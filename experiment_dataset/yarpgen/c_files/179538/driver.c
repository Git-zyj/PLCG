#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20693;
unsigned int var_5 = 2133849977U;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-68;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2615170694845764596LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-112;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)42;
signed char var_23 = (signed char)93;
_Bool var_24 = (_Bool)0;
int var_25 = 2146615439;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
long long int arr_2 [11] ;
int arr_5 [17] ;
int arr_7 [17] ;
_Bool arr_8 [17] [17] ;
long long int arr_3 [11] ;
signed char arr_4 [11] [11] ;
short arr_9 [17] ;
unsigned int arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 77688750148553671ULL : 2563760088390800032ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16911634022333269293ULL : 2191728287374092370ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6716456554071842176LL : 3613345955952977293LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -244239412;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 1310220337;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -910623301406426221LL : -7779446246135611540LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)51 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)-18390;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 264622537U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
