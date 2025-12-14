#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 7292410823832547489ULL;
unsigned long long int var_6 = 8185718833571488077ULL;
short var_7 = (short)-15220;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)65459;
unsigned int var_13 = 1990723708U;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 5683191463082031935ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 17458755810721713279ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2306145240718797262ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
