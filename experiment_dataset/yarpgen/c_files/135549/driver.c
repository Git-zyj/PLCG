#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 646747478U;
short var_2 = (short)22088;
unsigned long long int var_4 = 9533095120402827800ULL;
signed char var_6 = (signed char)77;
unsigned int var_7 = 4171408345U;
unsigned short var_8 = (unsigned short)60927;
unsigned short var_10 = (unsigned short)25671;
unsigned int var_11 = 1272588791U;
int zero = 0;
unsigned long long int var_12 = 948505484785175739ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)5;
signed char var_16 = (signed char)95;
unsigned char var_17 = (unsigned char)98;
unsigned short var_18 = (unsigned short)12881;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)217;
unsigned char arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_3 [24] ;
short arr_4 [24] [24] [24] ;
unsigned short arr_8 [24] [24] [24] [24] ;
unsigned int arr_11 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 4048104473U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)38836;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-26673;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3132665133U : 2416497773U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51728 : (unsigned short)42505;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18364 : (unsigned short)25304;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
