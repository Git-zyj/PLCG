#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4921976188157886780LL;
signed char var_1 = (signed char)-74;
long long int var_6 = 8751308569045485670LL;
long long int var_7 = -2298032594435852874LL;
int var_9 = 685430051;
signed char var_12 = (signed char)-58;
unsigned short var_13 = (unsigned short)24270;
long long int var_14 = 2660736897093595762LL;
signed char var_16 = (signed char)-60;
long long int var_17 = -4700910181138477811LL;
int zero = 0;
short var_18 = (short)-19825;
long long int var_19 = -8406280376544983897LL;
short var_20 = (short)-4707;
unsigned int var_21 = 1213985774U;
unsigned int var_22 = 1723079249U;
long long int var_23 = -806547180925451044LL;
short var_24 = (short)-21350;
signed char arr_0 [13] [13] ;
signed char arr_1 [13] ;
long long int arr_3 [21] ;
unsigned int arr_4 [21] [21] ;
long long int arr_5 [21] ;
unsigned int arr_2 [13] [13] ;
unsigned int arr_6 [21] ;
unsigned long long int arr_7 [21] ;
unsigned short arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -3882420072304810143LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 3888916425U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -6160529623697605247LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 136312792U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1758550936U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 753754698720334638ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)15537;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
