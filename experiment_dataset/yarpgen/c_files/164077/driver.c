#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
_Bool var_2 = (_Bool)1;
short var_3 = (short)31609;
unsigned short var_4 = (unsigned short)31280;
int var_5 = -1540499416;
unsigned long long int var_6 = 11872136132926423396ULL;
unsigned int var_7 = 4119266015U;
unsigned short var_8 = (unsigned short)23425;
signed char var_9 = (signed char)18;
unsigned int var_10 = 2088619982U;
short var_11 = (short)16358;
int var_12 = -691144738;
int var_13 = -1245730048;
unsigned short var_14 = (unsigned short)55661;
int zero = 0;
unsigned char var_15 = (unsigned char)16;
signed char var_16 = (signed char)-101;
signed char var_17 = (signed char)66;
signed char var_18 = (signed char)88;
unsigned long long int var_19 = 11194690271165325032ULL;
unsigned short var_20 = (unsigned short)60072;
long long int var_21 = 1821415711508862524LL;
_Bool arr_0 [12] [12] ;
short arr_2 [12] ;
signed char arr_6 [12] [12] [12] ;
_Bool arr_9 [22] ;
unsigned char arr_10 [22] ;
unsigned short arr_12 [22] [22] [22] ;
short arr_19 [14] [14] [14] ;
unsigned short arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)2037;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)-23262;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)58683;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
