#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2240850115466137243ULL;
unsigned long long int var_3 = 14748851487468342426ULL;
unsigned long long int var_6 = 8078486443741704009ULL;
unsigned long long int var_8 = 8019772558216774011ULL;
int zero = 0;
unsigned long long int var_17 = 11456592030595139355ULL;
unsigned long long int var_18 = 14986840879852450882ULL;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 16557975819000188280ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 3623773037170495762ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2681483955790548903ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 7942718356655756276ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
