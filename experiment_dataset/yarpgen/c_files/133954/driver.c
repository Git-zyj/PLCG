#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 903733430473197146ULL;
signed char var_7 = (signed char)37;
int var_10 = 693123627;
short var_15 = (short)-5821;
unsigned char var_17 = (unsigned char)250;
int zero = 0;
signed char var_19 = (signed char)8;
unsigned long long int var_20 = 10051430613733111751ULL;
signed char var_21 = (signed char)-74;
short var_22 = (short)18328;
short var_23 = (short)4977;
unsigned int arr_0 [14] [14] ;
int arr_3 [14] ;
int arr_5 [14] [14] ;
long long int arr_6 [14] [14] ;
_Bool arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1581813800U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1195618779;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -53181759 : -1802424960;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 8171610672141934901LL : -4081544060437198232LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
