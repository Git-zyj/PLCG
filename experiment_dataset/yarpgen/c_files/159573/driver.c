#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-7134;
unsigned int var_3 = 2487399907U;
unsigned long long int var_4 = 15344724099959948854ULL;
long long int var_10 = 995435809400160311LL;
short var_14 = (short)-15254;
unsigned int var_15 = 692353582U;
int zero = 0;
short var_18 = (short)-14067;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2166531046776510935ULL;
long long int var_21 = 653092672498915194LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)220;
short var_25 = (short)6795;
short var_26 = (short)-4659;
unsigned char var_27 = (unsigned char)218;
unsigned long long int arr_0 [17] ;
short arr_1 [17] [17] ;
_Bool arr_2 [17] ;
_Bool arr_3 [17] ;
_Bool arr_4 [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_8 [19] ;
short arr_9 [19] ;
signed char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 6141062002914353851ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6239;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)23957;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)59;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
