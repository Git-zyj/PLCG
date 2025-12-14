#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1702613399U;
unsigned short var_2 = (unsigned short)5420;
unsigned char var_4 = (unsigned char)150;
int var_5 = 675404911;
unsigned int var_6 = 2771900620U;
int var_7 = 191452587;
unsigned short var_8 = (unsigned short)19847;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 4196128992U;
long long int var_11 = -9213717997821616642LL;
unsigned char var_12 = (unsigned char)99;
unsigned short var_13 = (unsigned short)5816;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 473654084U;
short arr_0 [13] ;
_Bool arr_1 [13] [13] ;
unsigned char arr_3 [13] ;
short arr_5 [13] ;
short arr_6 [13] ;
unsigned int arr_2 [13] ;
long long int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)27968 : (short)-28546;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-24298;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)32733;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3027010219U : 4097193649U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -4735555190344045577LL : -4786566477021233682LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
