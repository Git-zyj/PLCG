#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2192;
short var_5 = (short)343;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_10 = (short)26770;
long long int var_12 = 7592344766511286066LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56481;
unsigned char var_14 = (unsigned char)181;
unsigned char var_15 = (unsigned char)205;
unsigned char var_16 = (unsigned char)63;
unsigned int var_17 = 2772407330U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)624;
unsigned char var_20 = (unsigned char)201;
unsigned long long int var_21 = 12765003139847111887ULL;
unsigned long long int arr_1 [21] [21] ;
unsigned char arr_2 [21] [21] ;
long long int arr_4 [21] ;
_Bool arr_7 [21] [21] ;
unsigned int arr_8 [21] [21] ;
unsigned short arr_16 [13] [13] ;
long long int arr_19 [13] ;
unsigned long long int arr_23 [13] [13] ;
unsigned char arr_6 [21] ;
unsigned int arr_12 [21] ;
long long int arr_24 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 17617981545922801483ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9201138906619829330LL : -574640943218863394LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 3699884732U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)44216 : (unsigned short)50463;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -4480501175631596493LL : 7183033274002355366LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = 4990365626702507255ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2813050906U : 4193646756U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 2763943510986800886LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
