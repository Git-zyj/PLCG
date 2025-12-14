#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
signed char var_1 = (signed char)67;
long long int var_2 = 247081936069132678LL;
unsigned long long int var_3 = 4590829302838277931ULL;
unsigned long long int var_4 = 12854594751106065192ULL;
unsigned char var_5 = (unsigned char)161;
unsigned long long int var_6 = 12446204731002946100ULL;
unsigned int var_7 = 1650129172U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2436522284692192909LL;
signed char var_11 = (signed char)119;
long long int var_12 = -697375773926721764LL;
long long int var_13 = -2927317735294448043LL;
short var_14 = (short)-3765;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10473516577824496427ULL;
int zero = 0;
unsigned long long int var_18 = 10381814395561795930ULL;
long long int var_19 = -738820072255553056LL;
long long int var_20 = -3742128950948630762LL;
unsigned char var_21 = (unsigned char)25;
long long int var_22 = -9190422378281856684LL;
signed char var_23 = (signed char)107;
unsigned long long int var_24 = 6187888863380902848ULL;
unsigned short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
unsigned char arr_6 [17] ;
unsigned int arr_7 [17] ;
unsigned int arr_8 [17] [17] ;
long long int arr_4 [15] ;
unsigned int arr_5 [15] ;
_Bool arr_9 [17] ;
signed char arr_10 [17] ;
unsigned char arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)32208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 14935906100971447639ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 16760042179463593680ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 2334433905U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 3559705529U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 6281424624813141281LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2770526971U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
