#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1407209905;
int var_4 = 1280970411;
unsigned int var_5 = 1427379597U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3118283209213459139LL;
unsigned short var_8 = (unsigned short)37718;
short var_10 = (short)-21887;
unsigned char var_11 = (unsigned char)103;
unsigned int var_13 = 3216812528U;
int zero = 0;
unsigned int var_14 = 1221970893U;
long long int var_15 = 5385333330485288492LL;
short var_16 = (short)-12193;
unsigned long long int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 18179635491563949771ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1368914046U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 806616791408496419LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
