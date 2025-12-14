#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-21369;
unsigned int var_4 = 3107847253U;
short var_5 = (short)31913;
unsigned long long int var_9 = 11993992598960675143ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)8308;
long long int var_12 = 2818167791739572209LL;
unsigned int var_13 = 986236744U;
unsigned int var_14 = 2739668302U;
long long int var_15 = -3673930797079673754LL;
unsigned long long int var_16 = 15740355591483220371ULL;
long long int var_17 = 5202824720071704760LL;
unsigned long long int var_18 = 1875398623714816012ULL;
long long int var_19 = 3632973095850401930LL;
short var_20 = (short)-23039;
unsigned long long int var_21 = 8593131153321663325ULL;
short var_22 = (short)-24873;
unsigned long long int var_23 = 14131388375472680861ULL;
long long int arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
unsigned int arr_2 [22] [22] ;
_Bool arr_3 [22] [22] ;
int arr_6 [22] ;
long long int arr_7 [22] ;
int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 5116496330914155527LL : -8394424367459069001LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63568 : (unsigned short)62387;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 878114990U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -1255158594;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -4349715785935486445LL : -8994668189970005044LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1573962453 : 81945357;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
