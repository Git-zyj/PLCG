#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30431;
unsigned char var_1 = (unsigned char)36;
short var_2 = (short)-31800;
unsigned short var_3 = (unsigned short)41694;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-11523;
long long int var_8 = 8346213787248725619LL;
unsigned short var_10 = (unsigned short)59697;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-99;
unsigned int var_14 = 2062914295U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)42245;
unsigned char var_21 = (unsigned char)57;
unsigned short var_22 = (unsigned short)46644;
short var_23 = (short)-24714;
unsigned short var_24 = (unsigned short)39803;
unsigned short var_25 = (unsigned short)28321;
short var_26 = (short)10438;
unsigned char var_27 = (unsigned char)54;
unsigned char var_28 = (unsigned char)44;
unsigned short var_29 = (unsigned short)48545;
_Bool var_30 = (_Bool)1;
long long int var_31 = -2911911315521761261LL;
unsigned short arr_2 [22] ;
short arr_4 [12] ;
unsigned int arr_6 [12] ;
unsigned int arr_10 [25] ;
short arr_12 [25] [25] [25] ;
unsigned short arr_13 [25] [25] ;
unsigned long long int arr_14 [25] [25] [25] ;
int arr_3 [22] ;
_Bool arr_7 [12] [12] ;
unsigned char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)34992;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)11256;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1671334311U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 3424307738U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-25219 : (short)15651;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)58576;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 4491989070123521906ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1261903622;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)176;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
