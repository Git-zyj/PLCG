#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned int var_1 = 2736259353U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)10868;
signed char var_7 = (signed char)-105;
unsigned int var_8 = 3370638795U;
int var_10 = -697150633;
unsigned short var_12 = (unsigned short)15764;
signed char var_14 = (signed char)112;
int var_15 = 939481591;
int zero = 0;
unsigned char var_16 = (unsigned char)6;
unsigned char var_17 = (unsigned char)75;
unsigned short var_18 = (unsigned short)8547;
long long int var_19 = -6910339219394904475LL;
unsigned long long int var_20 = 5152666465666103222ULL;
unsigned short var_21 = (unsigned short)35904;
short var_22 = (short)-8912;
unsigned int arr_0 [12] ;
int arr_4 [23] [23] ;
int arr_5 [23] [23] [23] ;
short arr_7 [23] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1501097336U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1935863936;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 619263924;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)29236;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)23122;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
