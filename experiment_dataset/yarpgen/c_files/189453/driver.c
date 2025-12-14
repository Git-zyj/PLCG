#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27870;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3648674140U;
signed char var_4 = (signed char)10;
unsigned int var_5 = 3764402525U;
unsigned long long int var_6 = 14815745564908942605ULL;
unsigned long long int var_7 = 858265793208253523ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)59089;
int zero = 0;
short var_10 = (short)16557;
signed char var_11 = (signed char)67;
signed char var_12 = (signed char)85;
short var_13 = (short)26737;
unsigned long long int var_14 = 13884638623970263428ULL;
unsigned char var_15 = (unsigned char)64;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] [21] [21] ;
unsigned char arr_3 [21] [21] ;
int arr_4 [21] ;
unsigned long long int arr_6 [15] ;
_Bool arr_7 [15] [15] ;
short arr_8 [15] ;
int arr_10 [15] ;
signed char arr_11 [15] ;
_Bool arr_5 [21] ;
unsigned long long int arr_9 [15] [15] ;
_Bool arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 15471241577156258295ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 770776359;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 8675714893268415700ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)-11326;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 706992985;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 11165750725781962410ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
