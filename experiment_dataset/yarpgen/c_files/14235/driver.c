#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5827953713282748098LL;
short var_3 = (short)-17995;
signed char var_6 = (signed char)122;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 16305976281641595359ULL;
int zero = 0;
unsigned int var_12 = 2946710712U;
short var_13 = (short)3788;
unsigned short var_14 = (unsigned short)40197;
short var_15 = (short)12050;
unsigned long long int var_16 = 7042909254145338787ULL;
signed char var_17 = (signed char)68;
int var_18 = 511999520;
signed char arr_2 [18] ;
unsigned char arr_3 [23] ;
int arr_4 [23] [23] ;
signed char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-92 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 852987381;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-107;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
