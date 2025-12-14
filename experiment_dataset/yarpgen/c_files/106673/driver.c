#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)53589;
signed char var_4 = (signed char)-43;
unsigned long long int var_6 = 13223047239199715493ULL;
signed char var_8 = (signed char)-18;
unsigned short var_13 = (unsigned short)10637;
unsigned short var_16 = (unsigned short)24367;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)62091;
int zero = 0;
unsigned short var_19 = (unsigned short)49324;
unsigned short var_20 = (unsigned short)14671;
short var_21 = (short)19757;
unsigned long long int var_22 = 11812647497532774065ULL;
signed char var_23 = (signed char)-125;
long long int var_24 = -7881945065910563417LL;
short var_25 = (short)25490;
short var_26 = (short)3048;
signed char var_27 = (signed char)-99;
short var_28 = (short)-4501;
unsigned short var_29 = (unsigned short)26511;
unsigned short var_30 = (unsigned short)15024;
signed char var_31 = (signed char)91;
unsigned char arr_0 [14] [14] ;
int arr_1 [14] ;
signed char arr_7 [14] [14] [14] ;
short arr_11 [14] [14] [14] ;
signed char arr_2 [14] ;
short arr_3 [14] ;
short arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1319909504;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)26 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)17846 : (short)20480;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-3883 : (short)2447;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-18503 : (short)31025;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
