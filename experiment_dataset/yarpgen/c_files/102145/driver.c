#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
int var_2 = 158335303;
unsigned long long int var_5 = 351251213887352065ULL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-48;
signed char var_14 = (signed char)-60;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 15727599665110605343ULL;
int zero = 0;
unsigned long long int var_19 = 12967654247334996333ULL;
unsigned char var_20 = (unsigned char)117;
unsigned short var_21 = (unsigned short)20219;
unsigned long long int var_22 = 8608730654887292686ULL;
unsigned int var_23 = 44613947U;
unsigned long long int var_24 = 17211104335054210097ULL;
signed char var_25 = (signed char)46;
short arr_0 [15] ;
unsigned char arr_8 [16] ;
unsigned long long int arr_10 [16] ;
_Bool arr_6 [15] [15] ;
unsigned int arr_7 [15] [15] ;
_Bool arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)2860;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2972571864571288104ULL : 15332270876160849894ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 1909449050U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
