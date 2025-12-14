#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13188;
long long int var_1 = 5713171389206677414LL;
unsigned long long int var_2 = 13026997333299555850ULL;
unsigned short var_7 = (unsigned short)65125;
unsigned long long int var_8 = 11931684298702975311ULL;
signed char var_9 = (signed char)72;
int var_10 = -1366898413;
unsigned char var_12 = (unsigned char)239;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)53;
signed char var_15 = (signed char)-76;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14776977272493638786ULL;
unsigned char var_20 = (unsigned char)175;
unsigned char var_21 = (unsigned char)158;
long long int var_22 = -1654960658082904427LL;
unsigned short var_23 = (unsigned short)5679;
_Bool var_24 = (_Bool)1;
long long int var_25 = 5362920425183995972LL;
int var_26 = -2063111302;
_Bool var_27 = (_Bool)0;
signed char arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
long long int arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
unsigned long long int arr_4 [25] [25] ;
int arr_5 [25] [25] ;
long long int arr_8 [25] ;
_Bool arr_9 [25] ;
unsigned char arr_10 [25] ;
signed char arr_7 [25] [25] [25] ;
long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -5325559983006445501LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)11492 : (unsigned short)36585;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 249821779270827260ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 140306506;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 6199162281584800942LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-66 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 6042034979522768384LL : 2116666911221049110LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
