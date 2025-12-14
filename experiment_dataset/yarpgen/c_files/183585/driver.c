#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
int var_2 = -538212696;
signed char var_3 = (signed char)-76;
short var_5 = (short)30837;
signed char var_6 = (signed char)127;
unsigned long long int var_7 = 8959405361961680038ULL;
long long int var_8 = -5585604962257502611LL;
unsigned short var_10 = (unsigned short)23450;
int zero = 0;
signed char var_11 = (signed char)-117;
unsigned char var_12 = (unsigned char)98;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8637859708656494288LL;
long long int var_15 = 7562892516145138665LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10686048845355911936ULL;
_Bool arr_0 [23] [23] ;
short arr_1 [23] ;
int arr_2 [23] ;
int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-2840;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1512119416;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1636524270 : 907267396;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
