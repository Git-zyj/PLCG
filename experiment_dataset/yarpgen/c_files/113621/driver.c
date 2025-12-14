#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned short var_2 = (unsigned short)62581;
signed char var_4 = (signed char)52;
signed char var_5 = (signed char)-70;
short var_6 = (short)-13080;
unsigned char var_7 = (unsigned char)102;
long long int var_8 = -7645092709351089655LL;
int var_9 = -1389992454;
short var_10 = (short)-8242;
signed char var_11 = (signed char)126;
unsigned char var_12 = (unsigned char)43;
long long int var_13 = 4949278355209117059LL;
unsigned char var_14 = (unsigned char)68;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7361617472198225131LL;
int zero = 0;
int var_18 = 190602498;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1509665699283020323LL;
long long int var_21 = 1377369943756704856LL;
signed char var_22 = (signed char)-72;
unsigned int var_23 = 3022428215U;
short var_24 = (short)32433;
unsigned int var_25 = 3412224314U;
unsigned char var_26 = (unsigned char)134;
unsigned long long int var_27 = 16686452063743088299ULL;
_Bool var_28 = (_Bool)0;
int var_29 = -1036768734;
long long int var_30 = -1250856299714718933LL;
unsigned int var_31 = 2146807836U;
signed char var_32 = (signed char)92;
unsigned char arr_1 [17] [17] ;
unsigned short arr_2 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned short arr_5 [25] ;
int arr_6 [25] ;
_Bool arr_8 [24] [24] ;
unsigned char arr_9 [24] [24] ;
unsigned short arr_11 [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] ;
short arr_15 [24] [24] ;
short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)19125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1591937697104657688ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24638 : (unsigned short)30067;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2084473530;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)16413;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)50 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (short)4773;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25484 : (short)11449;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
