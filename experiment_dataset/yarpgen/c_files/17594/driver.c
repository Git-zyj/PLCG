#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6635455999915354058LL;
unsigned long long int var_2 = 17286749916693543413ULL;
int var_4 = -2053919364;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)66;
unsigned int var_9 = 2530267550U;
unsigned short var_10 = (unsigned short)48531;
int zero = 0;
short var_11 = (short)-19820;
short var_12 = (short)20064;
unsigned short var_13 = (unsigned short)4369;
unsigned int var_14 = 600124320U;
unsigned short var_15 = (unsigned short)25616;
unsigned short arr_1 [16] ;
short arr_2 [16] [16] [16] ;
unsigned long long int arr_3 [16] ;
unsigned int arr_5 [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)50844;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-11834;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 17747704539037066648ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 514746024U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)188;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
