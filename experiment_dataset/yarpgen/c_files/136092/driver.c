#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8796507976518547243ULL;
unsigned char var_4 = (unsigned char)221;
unsigned short var_6 = (unsigned short)40224;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)64420;
int zero = 0;
short var_13 = (short)-28472;
unsigned long long int var_14 = 5311865620489086989ULL;
unsigned char var_15 = (unsigned char)110;
unsigned short var_16 = (unsigned short)43340;
unsigned short var_17 = (unsigned short)50273;
_Bool var_18 = (_Bool)0;
int var_19 = 1341846826;
unsigned int var_20 = 1905533218U;
signed char arr_9 [15] ;
long long int arr_7 [15] [15] ;
unsigned char arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -8558358199364667486LL : 8419137667923072129LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)172 : (unsigned char)5;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
