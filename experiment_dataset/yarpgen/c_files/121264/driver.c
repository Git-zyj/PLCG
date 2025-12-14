#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)120;
int zero = 0;
short var_13 = (short)-2956;
short var_14 = (short)14858;
short var_15 = (short)-19727;
unsigned long long int var_16 = 18038909071652623731ULL;
short var_17 = (short)-21969;
signed char var_18 = (signed char)-112;
unsigned short arr_1 [12] ;
int arr_2 [12] ;
unsigned long long int arr_5 [11] ;
short arr_4 [12] ;
int arr_8 [11] [11] ;
short arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)55697;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1092987045;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1911696879565767134ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)19634;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -1083613389;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)-12428;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
