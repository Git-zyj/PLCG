#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned long long int var_1 = 7280314658189634419ULL;
unsigned short var_2 = (unsigned short)21081;
short var_3 = (short)6311;
unsigned long long int var_4 = 14351772836632923880ULL;
unsigned char var_6 = (unsigned char)100;
int var_7 = -1577169729;
unsigned int var_9 = 879022745U;
unsigned long long int var_11 = 11608195966376967071ULL;
unsigned int var_13 = 1246616887U;
int zero = 0;
unsigned long long int var_14 = 2427912667320257130ULL;
unsigned short var_15 = (unsigned short)46573;
unsigned long long int var_16 = 14303261987075896043ULL;
int var_17 = -1293859452;
long long int var_18 = -1481684195291577238LL;
unsigned char var_19 = (unsigned char)71;
unsigned int var_20 = 1289604053U;
unsigned char arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
_Bool arr_2 [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] ;
long long int arr_9 [13] ;
unsigned int arr_3 [13] ;
unsigned char arr_10 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1827991452U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11430938849235258496ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15470744627418383850ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 1508991513133885430LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4131493974U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
