#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8960024674172883082LL;
unsigned long long int var_7 = 12460341276722936301ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_16 = (unsigned char)67;
int zero = 0;
unsigned long long int var_20 = 12074615973570845305ULL;
int var_21 = -1965209284;
unsigned int var_22 = 3672862014U;
long long int var_23 = 4343013866609133486LL;
signed char var_24 = (signed char)-77;
unsigned char var_25 = (unsigned char)168;
signed char var_26 = (signed char)104;
unsigned int arr_0 [13] [13] ;
int arr_1 [13] ;
_Bool arr_3 [13] ;
unsigned long long int arr_6 [25] [25] ;
unsigned char arr_7 [25] ;
unsigned long long int arr_8 [20] [20] ;
int arr_4 [13] ;
int arr_5 [13] ;
int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 4120316982U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -692888511;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 14827953383209342760ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 11290512408569017942ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 875519225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 645367020;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1705283429;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
