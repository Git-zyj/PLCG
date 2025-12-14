#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4904;
short var_2 = (short)-21291;
signed char var_5 = (signed char)88;
unsigned long long int var_8 = 9891452145198437085ULL;
long long int var_9 = 7429351275795368373LL;
signed char var_10 = (signed char)-6;
signed char var_12 = (signed char)-7;
unsigned int var_13 = 2132043536U;
unsigned int var_15 = 4255710637U;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
signed char var_17 = (signed char)121;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 732865791287825349ULL;
unsigned long long int var_20 = 11783564911403968743ULL;
unsigned char var_21 = (unsigned char)119;
unsigned int arr_4 [20] ;
unsigned int arr_5 [20] ;
signed char arr_10 [15] [15] ;
unsigned long long int arr_11 [15] [15] ;
unsigned long long int arr_14 [15] ;
unsigned long long int arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 2632617206U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2642450402U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-25 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 17114775012012928732ULL : 3321656064315086380ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 12929009588324399029ULL : 12439836048687072861ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 4026022833372211751ULL : 3877284159119536378ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
