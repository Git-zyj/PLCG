#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
short var_3 = (short)28159;
long long int var_4 = 7779093866768264440LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 8440578550745489208LL;
short var_8 = (short)2706;
long long int var_9 = 3893199931802830413LL;
int var_10 = -859631767;
int var_11 = 139681808;
int zero = 0;
short var_12 = (short)-13778;
long long int var_13 = -4018361196183421928LL;
unsigned short var_14 = (unsigned short)4868;
signed char var_15 = (signed char)-40;
unsigned char var_16 = (unsigned char)141;
unsigned long long int var_17 = 12391075785237365203ULL;
_Bool var_18 = (_Bool)1;
int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned long long int arr_4 [20] ;
unsigned long long int arr_5 [20] ;
int arr_8 [11] ;
signed char arr_9 [11] [11] ;
unsigned long long int arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -924130702 : -481541140;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 1188678010U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 9031085210777264666ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 9580082946367865055ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1813544352;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 1264172670949349931ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
