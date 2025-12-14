#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8106331696541959920ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 4118243450U;
signed char var_8 = (signed char)-106;
unsigned long long int var_10 = 5886615574245106712ULL;
signed char var_13 = (signed char)78;
unsigned long long int var_14 = 6864922556792225ULL;
int zero = 0;
short var_15 = (short)-18519;
unsigned int var_16 = 1800830971U;
short var_17 = (short)9082;
signed char var_18 = (signed char)127;
unsigned char var_19 = (unsigned char)218;
unsigned char var_20 = (unsigned char)174;
unsigned long long int var_21 = 1149345168035240628ULL;
unsigned long long int var_22 = 18122597972898837801ULL;
unsigned long long int var_23 = 10423639261692541437ULL;
long long int arr_0 [15] ;
long long int arr_1 [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_15 [15] [15] [15] [15] [15] ;
unsigned long long int arr_17 [15] [15] ;
short arr_4 [15] [15] [15] ;
unsigned long long int arr_21 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 965065154441665242LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1029613858943575857LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)178 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 9710565109601992074ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)22506;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = 727614297075071372ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
