#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -21089003;
signed char var_5 = (signed char)-93;
unsigned char var_7 = (unsigned char)121;
unsigned long long int var_10 = 11145903543160436138ULL;
unsigned short var_13 = (unsigned short)47446;
unsigned short var_14 = (unsigned short)36450;
signed char var_15 = (signed char)-27;
short var_17 = (short)20699;
int var_18 = -1680988131;
int zero = 0;
short var_19 = (short)-100;
int var_20 = 6436532;
unsigned int var_21 = 351103452U;
int var_22 = 990844559;
int var_23 = 906177616;
signed char var_24 = (signed char)37;
unsigned short var_25 = (unsigned short)41475;
signed char var_26 = (signed char)53;
int var_27 = 1853961416;
int var_28 = -268279426;
unsigned int var_29 = 3443328055U;
signed char var_30 = (signed char)-67;
int var_31 = -1597315167;
signed char var_32 = (signed char)34;
int arr_1 [19] ;
signed char arr_3 [19] ;
int arr_4 [19] [19] ;
signed char arr_10 [21] ;
long long int arr_11 [21] ;
int arr_6 [19] ;
unsigned char arr_12 [21] [21] ;
unsigned short arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1866260291 : 1689450084;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -337422126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 552823759554317088LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -80601426;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)5944;
}

void checksum() {
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
