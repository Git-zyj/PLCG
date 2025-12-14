#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1678978422U;
unsigned long long int var_1 = 4093607586758142381ULL;
unsigned short var_7 = (unsigned short)16765;
unsigned short var_9 = (unsigned short)303;
signed char var_14 = (signed char)-60;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)3271;
long long int var_18 = -8455135236331940128LL;
int zero = 0;
unsigned long long int var_19 = 1066836550485361240ULL;
signed char var_20 = (signed char)12;
unsigned char var_21 = (unsigned char)80;
_Bool var_22 = (_Bool)1;
long long int var_23 = -4812228394906281679LL;
unsigned short var_24 = (unsigned short)12356;
long long int arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned char arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned short arr_4 [23] [23] [23] ;
signed char arr_5 [23] [23] [23] ;
unsigned char arr_10 [23] [23] ;
short arr_11 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4658656207995689501LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)24694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-12355;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
