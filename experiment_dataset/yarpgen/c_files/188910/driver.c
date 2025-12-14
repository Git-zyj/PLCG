#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
short var_1 = (short)11327;
long long int var_2 = 7706213029557756368LL;
signed char var_4 = (signed char)-125;
signed char var_5 = (signed char)-80;
long long int var_6 = 6705925894705807235LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)61;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)69;
unsigned char var_12 = (unsigned char)148;
unsigned char var_13 = (unsigned char)87;
long long int var_16 = -1329398034007608781LL;
int var_18 = -1608199138;
short var_19 = (short)29689;
int zero = 0;
short var_20 = (short)-17500;
signed char var_21 = (signed char)-8;
long long int var_22 = -7426189661940709861LL;
int var_23 = 839723371;
unsigned long long int var_24 = 17267888081906052862ULL;
signed char var_25 = (signed char)111;
_Bool arr_0 [11] [11] ;
short arr_1 [11] ;
_Bool arr_2 [11] ;
short arr_5 [13] ;
unsigned long long int arr_6 [13] [13] ;
signed char arr_3 [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-30007;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-12768;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 13188527275974443471ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)31285;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
