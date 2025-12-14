#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29850;
unsigned short var_2 = (unsigned short)41785;
long long int var_3 = -7565892889124458072LL;
unsigned int var_5 = 3443260563U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)26400;
long long int var_11 = -5900097940823526993LL;
int var_13 = -1084289353;
unsigned int var_14 = 1806401374U;
signed char var_18 = (signed char)12;
int zero = 0;
short var_20 = (short)-30687;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17018580623000967988ULL;
signed char var_23 = (signed char)112;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)9;
unsigned short var_26 = (unsigned short)37702;
unsigned int arr_1 [10] ;
unsigned char arr_2 [10] ;
long long int arr_4 [13] ;
short arr_5 [13] ;
unsigned char arr_3 [10] [10] ;
int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2665700615U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2593870250692897730LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)10184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -186844223;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
