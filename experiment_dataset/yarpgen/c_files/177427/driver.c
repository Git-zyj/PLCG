#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned int var_1 = 2917158501U;
short var_2 = (short)-9593;
unsigned int var_3 = 1156416256U;
unsigned int var_4 = 781449445U;
unsigned long long int var_5 = 16348171415450927792ULL;
unsigned char var_6 = (unsigned char)115;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)60579;
int zero = 0;
long long int var_12 = 2201619815649217678LL;
unsigned long long int var_13 = 12675364106704060717ULL;
unsigned int var_14 = 3078696422U;
unsigned int var_15 = 3040793434U;
unsigned short var_16 = (unsigned short)6170;
signed char var_17 = (signed char)-59;
int arr_0 [23] [23] ;
long long int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -866204366;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2260340171128576977LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15888572976474755170ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
