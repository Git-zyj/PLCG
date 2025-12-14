#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
long long int var_3 = 8416189318289115915LL;
int var_5 = 1121903537;
unsigned long long int var_6 = 51321732296777898ULL;
unsigned short var_7 = (unsigned short)52064;
unsigned short var_8 = (unsigned short)2685;
unsigned char var_10 = (unsigned char)96;
long long int var_12 = 6709490913202949582LL;
int var_13 = -669945682;
unsigned int var_14 = 1308513961U;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 3376074393U;
int zero = 0;
short var_19 = (short)-25285;
int var_20 = -1222237072;
long long int var_21 = -1234120643399086022LL;
unsigned char var_22 = (unsigned char)9;
_Bool var_23 = (_Bool)1;
int var_24 = 1747836690;
unsigned int var_25 = 2350103274U;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 351385549799394786ULL;
int var_28 = 1069932166;
long long int var_29 = -3405755905140355021LL;
unsigned int arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] [13] [13] ;
unsigned long long int arr_3 [13] ;
unsigned short arr_11 [13] ;
int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 73688742U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)33539;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)50919;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 14339932864517821958ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned short)47989;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -742347192;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
