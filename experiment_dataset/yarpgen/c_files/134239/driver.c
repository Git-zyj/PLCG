#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56995;
unsigned char var_1 = (unsigned char)242;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4721876657333706261LL;
unsigned int var_4 = 794362799U;
unsigned short var_5 = (unsigned short)1630;
short var_7 = (short)13453;
unsigned short var_9 = (unsigned short)53860;
unsigned char var_10 = (unsigned char)4;
long long int var_11 = -6058846369088602092LL;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
unsigned char var_13 = (unsigned char)240;
unsigned char var_14 = (unsigned char)236;
long long int var_15 = 7697395177184325099LL;
unsigned short var_16 = (unsigned short)8043;
unsigned int var_17 = 2812366401U;
unsigned int var_18 = 4277913044U;
unsigned short var_19 = (unsigned short)36865;
unsigned int var_20 = 407223214U;
signed char arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
signed char arr_5 [17] [17] ;
unsigned char arr_2 [25] ;
unsigned char arr_3 [25] ;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3523017544U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)119 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1745780961 : 1155443516;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
