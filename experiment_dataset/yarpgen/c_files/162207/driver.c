#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned long long int var_2 = 12003689447437846766ULL;
signed char var_4 = (signed char)83;
unsigned char var_9 = (unsigned char)149;
unsigned char var_10 = (unsigned char)57;
int zero = 0;
signed char var_11 = (signed char)-127;
long long int var_12 = 1057158295204530448LL;
unsigned int var_13 = 4017206103U;
signed char var_14 = (signed char)-73;
unsigned char var_15 = (unsigned char)197;
signed char var_16 = (signed char)103;
signed char var_17 = (signed char)3;
unsigned char var_18 = (unsigned char)192;
unsigned long long int arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] ;
unsigned int arr_9 [21] ;
unsigned long long int arr_10 [21] ;
long long int arr_11 [21] ;
long long int arr_6 [15] ;
long long int arr_7 [15] [15] [15] ;
long long int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16713935193549814821ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)147 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)173 : (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -3702625222556760231LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 4155416920U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 14940091859420217724ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -231793437149891537LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4314247691392553969LL : -1124232028403016631LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8554148043425916921LL : 5479278553442128002LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = -5223900870724086304LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
