#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-14;
signed char var_3 = (signed char)109;
unsigned short var_4 = (unsigned short)31050;
unsigned int var_5 = 634523190U;
unsigned int var_6 = 399747118U;
int var_7 = -558422990;
unsigned long long int var_8 = 12127306835579278760ULL;
short var_9 = (short)-14698;
int var_11 = -899862447;
unsigned long long int var_12 = 1301563292462921557ULL;
unsigned int var_13 = 2672527879U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-88;
_Bool var_17 = (_Bool)0;
short var_18 = (short)10591;
short var_19 = (short)-9448;
short var_20 = (short)-7925;
unsigned short var_21 = (unsigned short)53624;
unsigned short var_22 = (unsigned short)33942;
int var_23 = 1357003016;
unsigned long long int var_24 = 13338522980980906051ULL;
unsigned short arr_0 [17] ;
signed char arr_1 [17] [17] ;
int arr_2 [17] ;
short arr_4 [24] [24] ;
int arr_5 [24] [24] ;
int arr_8 [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] ;
unsigned short arr_3 [17] ;
signed char arr_12 [24] ;
long long int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)57942;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -672634293;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)246;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -919046018;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -881652942;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3104284647598864242ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58087 : (unsigned short)59220;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -4352002144434733303LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
