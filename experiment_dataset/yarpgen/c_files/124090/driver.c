#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26704;
unsigned short var_1 = (unsigned short)2283;
int var_2 = 996216444;
int var_4 = -964868767;
unsigned long long int var_6 = 5499829141580829094ULL;
long long int var_9 = -928237401070810561LL;
int zero = 0;
short var_10 = (short)-11511;
int var_11 = -1708253876;
long long int var_12 = -24148122457994985LL;
long long int var_13 = 8788379075267879264LL;
unsigned int var_14 = 1102332756U;
unsigned long long int var_15 = 14344466355092502637ULL;
signed char var_16 = (signed char)57;
unsigned char var_17 = (unsigned char)171;
signed char var_18 = (signed char)105;
unsigned short var_19 = (unsigned short)58218;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6171573377995453144LL;
long long int var_22 = 5022248263530834479LL;
signed char var_23 = (signed char)28;
unsigned long long int var_24 = 1582803135594105784ULL;
int var_25 = 433717918;
signed char arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned short arr_2 [15] ;
unsigned int arr_3 [15] [15] ;
unsigned char arr_8 [15] [15] [15] ;
short arr_12 [15] [15] [15] ;
unsigned long long int arr_17 [10] ;
unsigned long long int arr_5 [15] ;
unsigned int arr_6 [15] ;
unsigned short arr_18 [10] ;
unsigned char arr_24 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 17279296433724883972ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)15355;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 24087295U : 3499249842U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-20502 : (short)14913;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 8804927723934831083ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16838891109280943229ULL : 13617427814069607702ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2993347508U : 4012050946U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13410 : (unsigned short)28132;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)255 : (unsigned char)113;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
