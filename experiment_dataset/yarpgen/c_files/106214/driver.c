#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned char var_3 = (unsigned char)211;
long long int var_4 = 1471665549914219187LL;
unsigned char var_5 = (unsigned char)121;
unsigned char var_7 = (unsigned char)64;
unsigned char var_9 = (unsigned char)236;
int var_10 = 217801180;
int zero = 0;
int var_13 = 1065439203;
long long int var_14 = 5062191360419721158LL;
signed char var_15 = (signed char)5;
int var_16 = -1946416880;
unsigned char var_17 = (unsigned char)100;
int var_18 = -1936330142;
unsigned long long int arr_0 [13] ;
short arr_1 [13] ;
short arr_2 [13] [13] ;
short arr_3 [13] [13] ;
signed char arr_7 [13] [13] ;
signed char arr_8 [13] ;
long long int arr_4 [13] ;
long long int arr_5 [13] ;
unsigned char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 14594266314797437685ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)25798 : (short)1933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-1250;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)9560 : (short)8368;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4230320552162944332LL : -4062845755756853635LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7928135400214160555LL : 5509495676847670583LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)211;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
