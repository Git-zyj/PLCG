#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_3 = 8158698962097408550ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
long long int var_12 = -7403383472251261024LL;
signed char var_13 = (signed char)-57;
signed char var_14 = (signed char)-123;
unsigned long long int arr_0 [25] ;
short arr_2 [25] ;
unsigned char arr_6 [20] [20] ;
signed char arr_3 [25] [25] ;
unsigned char arr_4 [25] ;
long long int arr_7 [20] ;
unsigned long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 5423488637240333501ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-27375;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 8935786669877834956LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 900655698549400213ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
