#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1844919707747899185LL;
int var_1 = -1600066008;
unsigned short var_2 = (unsigned short)58497;
unsigned int var_3 = 1966699567U;
unsigned int var_4 = 4002677721U;
signed char var_5 = (signed char)-72;
unsigned long long int var_8 = 8521257515760652531ULL;
unsigned char var_9 = (unsigned char)189;
signed char var_10 = (signed char)100;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)42;
signed char var_13 = (signed char)118;
signed char var_14 = (signed char)85;
unsigned short var_15 = (unsigned short)65415;
unsigned short var_16 = (unsigned short)1056;
unsigned long long int var_17 = 12665858490990776523ULL;
signed char var_18 = (signed char)-116;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)105;
unsigned char var_21 = (unsigned char)89;
short var_22 = (short)25126;
unsigned char var_23 = (unsigned char)209;
int var_24 = 1404887933;
short var_25 = (short)14548;
unsigned int var_26 = 2419272564U;
signed char arr_1 [13] [13] ;
unsigned int arr_4 [13] [13] ;
int arr_9 [13] [13] ;
signed char arr_13 [13] [13] ;
signed char arr_17 [13] [13] [13] ;
unsigned short arr_2 [13] ;
int arr_26 [20] ;
int arr_27 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 2260779550U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 1125818344;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)23792;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 622386838;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = 256625885;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
