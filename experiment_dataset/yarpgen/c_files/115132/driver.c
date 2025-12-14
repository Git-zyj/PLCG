#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3345255067U;
unsigned short var_1 = (unsigned short)43015;
long long int var_3 = 5678699979002457036LL;
unsigned char var_5 = (unsigned char)223;
unsigned int var_15 = 3280066522U;
unsigned char var_18 = (unsigned char)110;
int zero = 0;
int var_19 = 989217805;
int var_20 = 1980727328;
_Bool var_21 = (_Bool)1;
int var_22 = -1196618529;
short var_23 = (short)-2432;
unsigned short var_24 = (unsigned short)6566;
unsigned char arr_0 [21] [21] ;
unsigned short arr_1 [21] [21] ;
short arr_2 [21] ;
short arr_4 [10] [10] ;
unsigned short arr_5 [10] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-1891;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-30143;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)36567;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
