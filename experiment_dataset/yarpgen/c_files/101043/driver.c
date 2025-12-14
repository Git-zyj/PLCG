#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57;
unsigned char var_2 = (unsigned char)244;
unsigned int var_3 = 285282398U;
unsigned int var_4 = 344878439U;
unsigned char var_8 = (unsigned char)32;
int zero = 0;
unsigned short var_10 = (unsigned short)6397;
unsigned int var_11 = 2237364418U;
unsigned int var_12 = 2443189181U;
unsigned short var_13 = (unsigned short)18429;
unsigned long long int var_14 = 17151865865812695823ULL;
unsigned char var_15 = (unsigned char)54;
short var_16 = (short)-21675;
short var_17 = (short)-23617;
unsigned int arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_3 [12] ;
unsigned short arr_4 [12] ;
unsigned char arr_6 [12] [12] [12] ;
unsigned short arr_12 [12] [12] [12] [12] [12] ;
short arr_13 [12] ;
unsigned int arr_14 [19] ;
short arr_16 [19] [19] ;
short arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1942564216U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3470217019U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)54772;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)37082 : (unsigned short)58571;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)22766;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 1514646420U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-23464;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (short)-5535;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
