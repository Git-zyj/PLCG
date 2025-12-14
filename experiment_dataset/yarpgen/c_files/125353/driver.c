#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6690024555571886628LL;
unsigned int var_1 = 1161019233U;
unsigned int var_2 = 1949923501U;
unsigned short var_3 = (unsigned short)52116;
signed char var_4 = (signed char)-30;
long long int var_5 = -675206151023039904LL;
unsigned long long int var_6 = 13809505315717125307ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-23;
unsigned int var_9 = 1723129347U;
long long int var_11 = 3220997680022170106LL;
signed char var_12 = (signed char)-44;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-22629;
unsigned long long int var_15 = 4799756413973362934ULL;
signed char var_16 = (signed char)-33;
int var_17 = 1790436184;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)155;
unsigned char var_20 = (unsigned char)163;
unsigned long long int var_21 = 12158339096191633101ULL;
unsigned short var_22 = (unsigned short)49409;
long long int var_23 = -2457289746128508210LL;
int arr_2 [12] [12] ;
unsigned long long int arr_3 [12] ;
signed char arr_4 [12] [12] [12] ;
signed char arr_5 [12] [12] [12] ;
unsigned int arr_9 [23] ;
int arr_10 [23] ;
long long int arr_11 [23] ;
_Bool arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -1695351449;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 4931146403142475191ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 2955878426U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1268177347;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -1100554840216571144LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
