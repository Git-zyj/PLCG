#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3720861756082673590LL;
short var_1 = (short)-29102;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-22;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-67;
int var_7 = -1027239836;
unsigned long long int var_8 = 14071747295448048758ULL;
int zero = 0;
int var_10 = -76374138;
long long int var_11 = -1908454263457323426LL;
unsigned char var_12 = (unsigned char)21;
unsigned char var_13 = (unsigned char)203;
unsigned char var_14 = (unsigned char)191;
signed char var_15 = (signed char)-25;
_Bool var_16 = (_Bool)0;
unsigned char arr_2 [21] ;
unsigned char arr_3 [21] [21] [21] ;
int arr_4 [21] ;
short arr_5 [21] ;
_Bool arr_7 [21] ;
long long int arr_15 [12] ;
int arr_19 [14] [14] ;
unsigned short arr_8 [21] ;
int arr_11 [13] ;
int arr_16 [12] ;
unsigned short arr_17 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -121783027;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-3035;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 3976522842096774504LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 626085330;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46266 : (unsigned short)46291;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -499429215 : -1362144974;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1879622192 : 731326285;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)26419 : (unsigned short)60716;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
