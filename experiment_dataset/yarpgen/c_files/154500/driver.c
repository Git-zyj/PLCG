#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2682919647U;
short var_3 = (short)17077;
int var_6 = -2059840438;
int var_7 = -174913285;
unsigned int var_11 = 2866900446U;
short var_12 = (short)16863;
unsigned char var_18 = (unsigned char)7;
unsigned char var_19 = (unsigned char)28;
int zero = 0;
int var_20 = 63644960;
unsigned short var_21 = (unsigned short)18721;
unsigned char var_22 = (unsigned char)102;
unsigned int var_23 = 3612073182U;
unsigned int var_24 = 789101504U;
signed char var_25 = (signed char)5;
unsigned char var_26 = (unsigned char)38;
unsigned char var_27 = (unsigned char)182;
unsigned int var_28 = 1692352754U;
long long int var_29 = -8650871088655186509LL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)215;
signed char var_32 = (signed char)0;
int var_33 = -119639790;
unsigned char arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
int arr_8 [23] [23] ;
int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)162 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 372004740 : 431042160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 1310075933;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
