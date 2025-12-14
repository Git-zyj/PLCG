#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34452;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-15;
unsigned char var_3 = (unsigned char)172;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-15534;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12674400206914863836ULL;
unsigned short var_9 = (unsigned short)10476;
int zero = 0;
short var_10 = (short)-1014;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-106;
unsigned short var_13 = (unsigned short)49885;
unsigned short arr_0 [12] ;
unsigned short arr_4 [12] [12] ;
unsigned short arr_5 [12] [12] [12] ;
signed char arr_8 [12] ;
signed char arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)34833;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)37579;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)12670;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-95;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
