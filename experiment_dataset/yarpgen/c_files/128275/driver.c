#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7088736491706335082ULL;
unsigned short var_1 = (unsigned short)64686;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)52;
unsigned char var_4 = (unsigned char)35;
unsigned short var_6 = (unsigned short)43355;
unsigned char var_7 = (unsigned char)107;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7137144870309733903LL;
short var_11 = (short)-21103;
int zero = 0;
short var_12 = (short)233;
unsigned char var_13 = (unsigned char)129;
long long int var_14 = -7093463342537826128LL;
short var_15 = (short)-2309;
int var_16 = -1274041205;
unsigned char var_17 = (unsigned char)237;
signed char var_18 = (signed char)-122;
unsigned long long int var_19 = 17492357336280592206ULL;
unsigned int arr_1 [10] ;
short arr_2 [10] ;
unsigned long long int arr_5 [13] ;
signed char arr_6 [13] [13] ;
unsigned int arr_3 [10] [10] ;
unsigned long long int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1589062885U : 3508923140U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-17426 : (short)-17521;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4435787590321199835ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1396908949U : 86388077U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 8739979478091411320ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
