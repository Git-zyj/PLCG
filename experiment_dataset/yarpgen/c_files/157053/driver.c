#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3535226790U;
unsigned short var_3 = (unsigned short)61841;
unsigned short var_7 = (unsigned short)11005;
unsigned short var_8 = (unsigned short)22814;
long long int var_15 = 5565889562887202036LL;
int zero = 0;
unsigned short var_20 = (unsigned short)46985;
unsigned long long int var_21 = 14781384530735290031ULL;
long long int var_22 = -4816334520382002660LL;
unsigned short var_23 = (unsigned short)10508;
signed char var_24 = (signed char)0;
long long int arr_0 [25] [25] ;
signed char arr_1 [25] ;
long long int arr_7 [16] [16] [16] ;
long long int arr_10 [19] ;
unsigned long long int arr_8 [16] ;
signed char arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -3033130266997633973LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)96 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3093178618089812750LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1262040046854688352LL : -4469388589137411388LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 14695655727108808432ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)-118;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
