#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2872007459U;
unsigned long long int var_3 = 1831792766939878111ULL;
int var_5 = -57625726;
unsigned char var_7 = (unsigned char)206;
short var_8 = (short)-9182;
unsigned long long int var_10 = 16328357142528357834ULL;
int var_11 = 1714490297;
signed char var_13 = (signed char)11;
unsigned int var_14 = 1795156864U;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)32;
signed char var_18 = (signed char)112;
unsigned int var_19 = 2455597481U;
_Bool var_20 = (_Bool)1;
short arr_1 [11] ;
unsigned short arr_2 [11] [11] [11] ;
int arr_6 [11] [11] [11] [11] ;
int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)1704;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)4375;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1472341141 : 1595079129;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1606617967 : 601460001;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
