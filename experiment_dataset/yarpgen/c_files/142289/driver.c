#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4877716126439901161ULL;
long long int var_13 = -7392527306775468882LL;
int zero = 0;
long long int var_14 = 6125250469204683951LL;
unsigned long long int var_15 = 7897850717822431014ULL;
unsigned long long int var_16 = 3548681687550639135ULL;
unsigned short var_17 = (unsigned short)63530;
short var_18 = (short)-5332;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3445948802635778413LL;
signed char var_21 = (signed char)-105;
unsigned long long int var_22 = 13552636100551229301ULL;
long long int var_23 = -5536853014223767895LL;
unsigned long long int arr_0 [16] [16] ;
long long int arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
unsigned int arr_4 [21] ;
short arr_5 [21] ;
long long int arr_7 [21] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 15415245530860235876ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -7809612660286411444LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2190009873U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1342058960U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-3956;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 3281787236674163499LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5143017855095743795LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
