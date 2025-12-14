#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10272278527892600860ULL;
int var_2 = -105919646;
short var_3 = (short)18468;
short var_5 = (short)21221;
unsigned int var_6 = 1857929055U;
signed char var_7 = (signed char)69;
short var_8 = (short)-3715;
unsigned short var_9 = (unsigned short)55421;
long long int var_10 = -1713398979720458887LL;
int zero = 0;
unsigned long long int var_11 = 13581569837045790662ULL;
unsigned long long int var_12 = 5521906764934566160ULL;
unsigned long long int var_13 = 15298948382509463669ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 827311190;
unsigned int arr_0 [11] [11] ;
unsigned long long int arr_2 [11] [11] [11] ;
int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 802408923U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 16637242887014967554ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -2052376298;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
