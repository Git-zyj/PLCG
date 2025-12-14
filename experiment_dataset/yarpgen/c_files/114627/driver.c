#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37855;
unsigned char var_2 = (unsigned char)173;
signed char var_3 = (signed char)-123;
int var_4 = 1289302065;
unsigned char var_5 = (unsigned char)223;
int var_6 = 600185329;
signed char var_7 = (signed char)110;
int var_8 = 1583759759;
unsigned char var_10 = (unsigned char)11;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
signed char var_14 = (signed char)58;
int var_15 = -1913829623;
short var_16 = (short)-9271;
long long int var_17 = -2305651960392673566LL;
signed char var_18 = (signed char)-92;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3531815010U;
signed char var_21 = (signed char)-14;
unsigned long long int arr_1 [13] ;
long long int arr_3 [13] ;
unsigned int arr_4 [13] ;
int arr_2 [13] [13] ;
unsigned char arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 16036830195858311199ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3872493305377432178LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3639898275U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 64893749;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)211;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
