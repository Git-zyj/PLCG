#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31746;
unsigned long long int var_1 = 65172106443851048ULL;
unsigned long long int var_2 = 13132493153155080642ULL;
unsigned long long int var_3 = 5530990599768389434ULL;
signed char var_4 = (signed char)75;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = -215144431;
unsigned short var_8 = (unsigned short)42449;
unsigned int var_9 = 4259421919U;
short var_10 = (short)-30192;
int zero = 0;
unsigned short var_11 = (unsigned short)20761;
unsigned short var_12 = (unsigned short)43922;
signed char var_13 = (signed char)104;
short var_14 = (short)-23982;
short var_15 = (short)-30660;
signed char arr_0 [14] [14] ;
unsigned char arr_3 [14] ;
short arr_6 [14] [14] [14] ;
unsigned int arr_7 [14] [14] [14] ;
unsigned short arr_12 [14] [14] ;
signed char arr_13 [14] [14] ;
unsigned char arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-121 : (short)15809;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 279983394U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)36226;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)69;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
