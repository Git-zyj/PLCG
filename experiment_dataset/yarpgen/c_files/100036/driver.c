#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3961819660U;
unsigned long long int var_4 = 12900090564257977766ULL;
long long int var_9 = 2770649406994732769LL;
unsigned char var_10 = (unsigned char)121;
unsigned char var_11 = (unsigned char)133;
unsigned long long int var_13 = 17081802969483666194ULL;
unsigned int var_16 = 994477426U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 2690789341061825430ULL;
unsigned char var_21 = (unsigned char)47;
long long int var_22 = 360355984231108474LL;
short var_23 = (short)20143;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_2 [11] ;
long long int arr_3 [11] ;
short arr_4 [11] [11] [11] ;
int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 9683696916680644200ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 574385376361324258LL : 3123437588021117903LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)140;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -599740805 : -1933149406;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
