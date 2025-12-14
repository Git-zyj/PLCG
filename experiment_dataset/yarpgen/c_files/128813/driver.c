#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25722;
short var_2 = (short)22290;
unsigned int var_4 = 2422367897U;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 3712726644U;
short var_11 = (short)-14864;
int var_14 = 1334127538;
unsigned int var_16 = 891527656U;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -4866499825278321855LL;
int var_20 = -1738030159;
unsigned short var_21 = (unsigned short)42368;
unsigned char var_22 = (unsigned char)196;
short var_23 = (short)-21411;
unsigned int var_24 = 3563720615U;
unsigned char arr_4 [25] ;
unsigned int arr_5 [25] ;
short arr_2 [10] ;
long long int arr_3 [10] [10] ;
unsigned int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2671394800U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)6516;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 260121822063210660LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3404269603U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
