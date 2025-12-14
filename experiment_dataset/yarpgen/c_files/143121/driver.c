#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -838136485;
signed char var_2 = (signed char)-83;
unsigned int var_3 = 2591794010U;
unsigned short var_5 = (unsigned short)5615;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 927888101;
int var_13 = 1686928594;
int zero = 0;
unsigned int var_14 = 968761625U;
unsigned char var_15 = (unsigned char)214;
long long int var_16 = -3285456062097234366LL;
_Bool var_17 = (_Bool)1;
unsigned char arr_3 [17] [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)0 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 936097812U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
