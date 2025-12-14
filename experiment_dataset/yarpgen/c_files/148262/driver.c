#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2334209662376786888LL;
unsigned long long int var_2 = 4642350831899024705ULL;
unsigned short var_3 = (unsigned short)3907;
unsigned long long int var_6 = 4445922440308705459ULL;
unsigned long long int var_10 = 14825276204399808956ULL;
short var_12 = (short)-6049;
unsigned int var_14 = 779453839U;
short var_15 = (short)12984;
long long int var_17 = -3519664957603494600LL;
signed char var_18 = (signed char)-52;
int zero = 0;
unsigned long long int var_19 = 10682869868042012586ULL;
unsigned int var_20 = 3258791252U;
unsigned long long int var_21 = 1474363888788098723ULL;
unsigned short var_22 = (unsigned short)23943;
long long int var_23 = 5472459557990145802LL;
long long int var_24 = -497092837319408850LL;
unsigned long long int var_25 = 7232078879680944439ULL;
unsigned short arr_0 [13] ;
_Bool arr_2 [13] [13] ;
short arr_4 [13] ;
unsigned long long int arr_5 [13] ;
unsigned short arr_3 [13] ;
unsigned char arr_9 [13] [13] ;
unsigned long long int arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)61655;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-32545;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 15633428994796455220ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)5363;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 7526942980044268615ULL : 17982303834290973877ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
