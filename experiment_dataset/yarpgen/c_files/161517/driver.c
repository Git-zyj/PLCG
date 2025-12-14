#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4482600927375811747LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)19;
unsigned char var_12 = (unsigned char)180;
long long int var_13 = 2080186756550464288LL;
unsigned short var_15 = (unsigned short)7261;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)120;
unsigned int var_22 = 4018221082U;
long long int var_23 = 3685950029515605491LL;
unsigned short var_24 = (unsigned short)30361;
short var_25 = (short)2530;
signed char var_26 = (signed char)40;
signed char arr_0 [13] [13] ;
_Bool arr_1 [13] ;
unsigned char arr_2 [13] ;
long long int arr_3 [13] [13] ;
signed char arr_5 [13] [13] ;
signed char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 8010480995080655388LL : 7267210482504006218LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)-43;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
