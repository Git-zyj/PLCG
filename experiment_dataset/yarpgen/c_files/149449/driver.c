#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1418635598U;
unsigned char var_1 = (unsigned char)216;
long long int var_2 = -1662874116591928173LL;
short var_3 = (short)24219;
unsigned long long int var_4 = 633567306249802863ULL;
short var_5 = (short)-9480;
unsigned int var_7 = 2505636551U;
short var_8 = (short)15321;
unsigned long long int var_9 = 126306891996723897ULL;
int zero = 0;
short var_10 = (short)-13751;
long long int var_11 = -8040526852870505586LL;
unsigned short arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
short arr_3 [13] [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)41430;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)33331;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2323989884913406656ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17019 : (short)795;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3860361615198431479ULL : 1021225499532051374ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
