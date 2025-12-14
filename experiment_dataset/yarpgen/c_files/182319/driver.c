#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
long long int var_1 = 2297453915232648801LL;
long long int var_2 = -1511580864300416042LL;
short var_3 = (short)-22401;
unsigned int var_4 = 1806272130U;
long long int var_5 = -1224598588417014092LL;
long long int var_6 = 685496925180233580LL;
long long int var_7 = -6560224970561839761LL;
unsigned int var_8 = 2713828204U;
unsigned int var_9 = 6628228U;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3957633752364984150LL;
int zero = 0;
int var_12 = 545903095;
_Bool var_13 = (_Bool)0;
long long int var_14 = 568247934716362447LL;
long long int var_15 = -5388744794486745199LL;
long long int arr_0 [24] ;
short arr_1 [24] ;
signed char arr_2 [24] ;
long long int arr_3 [24] ;
short arr_4 [24] ;
int arr_5 [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3649897526623764954LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-20701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2444361829502429341LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-21852;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 1058695546;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3543623705756507203LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
