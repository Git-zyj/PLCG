#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15776477877491277260ULL;
int var_1 = -1169268090;
unsigned short var_2 = (unsigned short)15022;
int var_4 = 1903117212;
unsigned int var_5 = 251695173U;
signed char var_7 = (signed char)2;
unsigned char var_8 = (unsigned char)78;
unsigned int var_9 = 3465199899U;
int zero = 0;
unsigned char var_10 = (unsigned char)222;
unsigned long long int var_11 = 13382364747501463309ULL;
unsigned int var_12 = 3154466927U;
signed char arr_0 [24] ;
unsigned short arr_2 [24] ;
int arr_3 [24] ;
short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)62244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -2100013402;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26409;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
