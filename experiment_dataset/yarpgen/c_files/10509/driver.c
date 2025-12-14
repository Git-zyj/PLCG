#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17854;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)9;
unsigned char var_4 = (unsigned char)26;
signed char var_5 = (signed char)-3;
unsigned short var_7 = (unsigned short)1661;
unsigned short var_9 = (unsigned short)26853;
unsigned long long int var_10 = 14550397322379098094ULL;
unsigned int var_11 = 3009051574U;
int zero = 0;
int var_15 = 1010781543;
long long int var_16 = 7599987418656694164LL;
unsigned long long int var_17 = 2129248319997303508ULL;
short var_18 = (short)2091;
signed char var_19 = (signed char)-64;
int var_20 = 853160167;
unsigned int var_21 = 1643567734U;
unsigned int arr_2 [15] ;
unsigned int arr_3 [15] [15] ;
signed char arr_8 [23] [23] ;
int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 833433450U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2515757912U : 1502733758U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -710825533;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
