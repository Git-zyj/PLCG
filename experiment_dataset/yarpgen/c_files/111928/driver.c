#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1775;
short var_2 = (short)-3790;
int var_3 = 1410350662;
unsigned char var_5 = (unsigned char)194;
unsigned short var_6 = (unsigned short)48162;
short var_7 = (short)11722;
unsigned short var_8 = (unsigned short)25237;
unsigned short var_9 = (unsigned short)24867;
int zero = 0;
int var_10 = -214352295;
unsigned int var_11 = 2679563224U;
signed char var_12 = (signed char)-7;
unsigned short var_13 = (unsigned short)17984;
unsigned short var_14 = (unsigned short)40595;
_Bool var_15 = (_Bool)1;
short var_16 = (short)31655;
unsigned short arr_0 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
unsigned short arr_4 [15] ;
unsigned long long int arr_5 [15] [15] [15] [15] ;
signed char arr_6 [15] ;
long long int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)60193;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17910789847840333993ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)40480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2550576983520815818ULL : 4406470798769168213ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 146932449705062603LL : 7034361795495956778LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
