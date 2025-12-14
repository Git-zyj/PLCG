#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5220066950752298274ULL;
unsigned char var_2 = (unsigned char)204;
unsigned long long int var_4 = 17741608556036052139ULL;
long long int var_7 = 1728966985094416032LL;
unsigned int var_8 = 3678103402U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2802751066U;
int var_12 = -761466398;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)10712;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)244;
long long int var_17 = 8535853182942843950LL;
short var_18 = (short)28437;
unsigned int var_19 = 770029167U;
unsigned long long int arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
long long int arr_5 [11] [11] ;
long long int arr_3 [11] ;
unsigned int arr_4 [11] ;
long long int arr_7 [11] ;
unsigned long long int arr_8 [11] ;
unsigned char arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 12413275297602780035ULL : 13657566413916164629ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3826365723U : 2068837388U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58112 : (unsigned short)55997;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 7854228034117287122LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6002306403755558478LL : -7510650558721096768LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 419381909U : 4020073704U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 2683373676301624637LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 16553396805092657173ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)157;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
