#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64450;
unsigned long long int var_5 = 8709604634574441463ULL;
unsigned long long int var_8 = 15747607380679754776ULL;
unsigned long long int var_9 = 15014029378320160029ULL;
unsigned short var_10 = (unsigned short)34335;
unsigned long long int var_13 = 9682092621326847149ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)52635;
unsigned short var_18 = (unsigned short)17286;
unsigned short var_19 = (unsigned short)26575;
unsigned long long int var_20 = 12680072392047899513ULL;
unsigned short arr_0 [10] ;
unsigned long long int arr_4 [10] ;
unsigned short arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)31987;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 307442766245446708ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)42941;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)2268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1871007211260913673ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
