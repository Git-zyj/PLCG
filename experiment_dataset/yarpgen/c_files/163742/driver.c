#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8061483352483306046ULL;
unsigned char var_3 = (unsigned char)115;
long long int var_4 = 4714189086643608578LL;
unsigned char var_8 = (unsigned char)148;
unsigned int var_10 = 2964927159U;
unsigned long long int var_14 = 1877946360359612718ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
unsigned char var_18 = (unsigned char)65;
unsigned short var_19 = (unsigned short)28143;
unsigned long long int var_20 = 3063692997282857093ULL;
unsigned short var_21 = (unsigned short)15235;
unsigned char var_22 = (unsigned char)8;
unsigned int var_23 = 2630288255U;
unsigned char var_24 = (unsigned char)203;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3444007875U;
unsigned long long int var_27 = 12507420626848168146ULL;
unsigned char arr_0 [10] [10] ;
_Bool arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] [21] ;
unsigned short arr_8 [16] ;
long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)3431;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 4580578529090150925ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)11406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -5127006864684459830LL : 821530829608834724LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
