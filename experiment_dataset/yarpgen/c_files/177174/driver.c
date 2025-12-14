#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26460;
unsigned short var_2 = (unsigned short)8040;
int var_5 = 1255299567;
int var_6 = 133622428;
unsigned short var_9 = (unsigned short)35877;
unsigned long long int var_10 = 11008535422396395883ULL;
short var_11 = (short)13103;
unsigned int var_12 = 1395231725U;
int var_13 = 937457953;
unsigned short var_14 = (unsigned short)52957;
unsigned char var_16 = (unsigned char)57;
unsigned short var_18 = (unsigned short)4706;
int zero = 0;
unsigned short var_19 = (unsigned short)39263;
unsigned char var_20 = (unsigned char)194;
unsigned char var_21 = (unsigned char)72;
int var_22 = -2046811637;
unsigned short var_23 = (unsigned short)12099;
int var_24 = -817930382;
long long int var_25 = 4670043280702529594LL;
int var_26 = 304935572;
short var_27 = (short)-19773;
short var_28 = (short)-19687;
unsigned short var_29 = (unsigned short)38165;
unsigned short var_30 = (unsigned short)16518;
unsigned long long int var_31 = 3766231490818565176ULL;
unsigned short var_32 = (unsigned short)12766;
unsigned short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] ;
short arr_4 [24] [24] ;
long long int arr_5 [24] ;
long long int arr_7 [24] [24] [24] ;
unsigned int arr_11 [18] ;
unsigned char arr_12 [18] ;
unsigned char arr_14 [18] ;
unsigned int arr_8 [24] [24] ;
signed char arr_16 [18] ;
long long int arr_17 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)52522 : (unsigned short)13711;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 351669198U : 926584783U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)15199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)4429;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6067 : (short)-22070;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6811108370785481033LL : 2458766569568612557LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -8320178720551084446LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 2786166168U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3806746960U : 3029833729U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 7041294490309146757LL : -8093274455172006907LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
