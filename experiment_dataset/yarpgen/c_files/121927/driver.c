#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16430;
unsigned long long int var_1 = 4669390143670960115ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 3622596234682572962LL;
short var_7 = (short)8380;
int var_11 = 638085229;
unsigned char var_12 = (unsigned char)19;
unsigned short var_13 = (unsigned short)5098;
short var_14 = (short)-17835;
unsigned int var_15 = 2103831229U;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
short var_17 = (short)29257;
signed char var_18 = (signed char)83;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [23] [23] ;
int arr_2 [23] [23] ;
unsigned char arr_3 [23] ;
long long int arr_5 [23] ;
unsigned short arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20678;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1961323392;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -4933768766219132010LL : -1685568486702421667LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)37499 : (unsigned short)12369;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
