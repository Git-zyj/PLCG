#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19620;
long long int var_1 = -549875050235030795LL;
unsigned short var_2 = (unsigned short)61205;
unsigned short var_3 = (unsigned short)24632;
int var_4 = 758603547;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)8639;
unsigned char var_9 = (unsigned char)4;
unsigned short var_12 = (unsigned short)20348;
unsigned char var_13 = (unsigned char)28;
unsigned char var_14 = (unsigned char)126;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned short var_21 = (unsigned short)34066;
unsigned short var_22 = (unsigned short)517;
long long int var_23 = 8673626403443415464LL;
unsigned short var_24 = (unsigned short)36962;
unsigned short var_25 = (unsigned short)56920;
unsigned short var_26 = (unsigned short)24523;
short arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_3 [24] ;
_Bool arr_4 [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] ;
int arr_7 [24] [24] [24] ;
unsigned char arr_8 [24] ;
unsigned short arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)12223 : (short)18736;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2617 : (unsigned short)23223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3538467385587262154ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -880377094 : -787786603;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39848 : (unsigned short)55828;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
