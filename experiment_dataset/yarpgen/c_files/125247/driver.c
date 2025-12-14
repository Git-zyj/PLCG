#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2828936987U;
unsigned char var_2 = (unsigned char)140;
unsigned char var_3 = (unsigned char)84;
signed char var_4 = (signed char)-72;
unsigned short var_5 = (unsigned short)33331;
unsigned long long int var_7 = 11687899670119307985ULL;
signed char var_10 = (signed char)-75;
unsigned char var_11 = (unsigned char)191;
unsigned int var_12 = 3020793387U;
int zero = 0;
unsigned char var_13 = (unsigned char)63;
short var_14 = (short)18797;
_Bool var_15 = (_Bool)0;
short var_16 = (short)21758;
_Bool arr_1 [22] [22] ;
unsigned int arr_4 [22] ;
unsigned char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2363190127U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)31 : (unsigned char)99;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
