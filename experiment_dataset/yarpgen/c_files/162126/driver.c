#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 82586209;
int var_2 = -1223685050;
long long int var_10 = 7226995463573348949LL;
long long int var_13 = 4993937583435995834LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 10414695031750587570ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
unsigned long long int var_21 = 6201989447530854387ULL;
signed char var_22 = (signed char)2;
unsigned long long int var_23 = 3641288564307241411ULL;
long long int var_24 = -8817780228900576190LL;
signed char arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
int arr_4 [14] ;
unsigned long long int arr_5 [14] ;
_Bool arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 167319597371699230ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -668886932;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 16789886191663872411ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
