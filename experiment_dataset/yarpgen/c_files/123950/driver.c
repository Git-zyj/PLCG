#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
short var_5 = (short)26877;
long long int var_6 = -7880316989586988800LL;
unsigned short var_7 = (unsigned short)1879;
unsigned char var_9 = (unsigned char)160;
unsigned char var_13 = (unsigned char)63;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)55110;
short var_16 = (short)9512;
int zero = 0;
unsigned int var_18 = 2848457004U;
unsigned char var_19 = (unsigned char)81;
int var_20 = -831181827;
unsigned char var_21 = (unsigned char)61;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned short arr_4 [24] ;
unsigned char arr_3 [21] ;
_Bool arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)59567;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
