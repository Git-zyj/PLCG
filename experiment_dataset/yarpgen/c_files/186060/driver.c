#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1534272598;
unsigned long long int var_9 = 3450208285954621646ULL;
unsigned int var_10 = 393252471U;
unsigned char var_16 = (unsigned char)191;
int zero = 0;
unsigned long long int var_18 = 4282786143504769822ULL;
unsigned char var_19 = (unsigned char)45;
unsigned int var_20 = 3746175086U;
unsigned long long int var_21 = 8274586239001208761ULL;
unsigned char var_22 = (unsigned char)209;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
signed char arr_10 [13] [13] [13] ;
signed char arr_18 [25] [25] ;
short arr_20 [25] ;
short arr_4 [13] [13] ;
unsigned char arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 17736179142412436644ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (short)481;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-7478;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)63;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
