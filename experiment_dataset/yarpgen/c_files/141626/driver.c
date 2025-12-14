#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2473624271U;
unsigned char var_4 = (unsigned char)42;
unsigned long long int var_6 = 16230341101922871188ULL;
unsigned char var_12 = (unsigned char)185;
long long int var_14 = -5561761295339141542LL;
long long int var_16 = -7088379138059328459LL;
int zero = 0;
unsigned char var_17 = (unsigned char)71;
short var_18 = (short)24447;
short var_19 = (short)-10771;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2112274278U;
unsigned char var_22 = (unsigned char)150;
unsigned short var_23 = (unsigned short)3331;
unsigned short var_24 = (unsigned short)10747;
int var_25 = -279431640;
unsigned char var_26 = (unsigned char)198;
long long int arr_0 [11] [11] ;
_Bool arr_5 [16] ;
unsigned long long int arr_6 [16] ;
unsigned short arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned int arr_10 [16] ;
signed char arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
signed char arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -1173672405847386145LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 10690050005445229420ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)6570;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 16407864336549685717ULL : 2890264865676588951ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2260190548U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3853675795U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)99 : (signed char)-66;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
