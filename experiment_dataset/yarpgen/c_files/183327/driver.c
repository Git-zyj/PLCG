#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
_Bool var_5 = (_Bool)1;
long long int var_6 = 343828348815016521LL;
unsigned int var_9 = 2937549134U;
unsigned char var_10 = (unsigned char)183;
unsigned char var_13 = (unsigned char)62;
long long int var_15 = 1111004350834945726LL;
long long int var_16 = -844973026075023649LL;
long long int var_17 = -806916756229503946LL;
int zero = 0;
long long int var_18 = -5241260429444961066LL;
short var_19 = (short)-239;
long long int var_20 = -4098021419157088116LL;
signed char var_21 = (signed char)-109;
unsigned int var_22 = 73581896U;
unsigned int var_23 = 1232530031U;
_Bool var_24 = (_Bool)0;
long long int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
unsigned char arr_5 [10] [10] ;
unsigned int arr_9 [22] ;
_Bool arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1000266243085208138LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8614813884294281345LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2935357223U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2754838141U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
