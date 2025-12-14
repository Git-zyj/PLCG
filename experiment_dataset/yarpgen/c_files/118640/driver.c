#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31075;
long long int var_2 = 1242157775126823630LL;
unsigned int var_4 = 1616019834U;
long long int var_5 = -4689084880941043226LL;
signed char var_8 = (signed char)-72;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)129;
unsigned long long int var_12 = 9702680130730727248ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)117;
int zero = 0;
signed char var_17 = (signed char)121;
unsigned int var_18 = 3715408481U;
unsigned long long int var_19 = 14093527636479114773ULL;
signed char var_20 = (signed char)-75;
unsigned char var_21 = (unsigned char)2;
unsigned char var_22 = (unsigned char)167;
long long int var_23 = -5071157318239042452LL;
unsigned int var_24 = 4204294144U;
unsigned short var_25 = (unsigned short)59546;
long long int var_26 = 8819321388901041742LL;
long long int var_27 = -2448438433975222823LL;
unsigned char arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
_Bool arr_6 [25] [25] ;
unsigned char arr_8 [11] ;
unsigned char arr_14 [17] ;
unsigned int arr_3 [13] [13] ;
unsigned int arr_4 [13] [13] ;
_Bool arr_11 [11] ;
unsigned char arr_12 [11] ;
unsigned char arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1785781080U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)14552;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 116944083U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 2106406425U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned char)29;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
