#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3885944337687959283LL;
int var_3 = -405660718;
unsigned int var_5 = 439267603U;
unsigned char var_6 = (unsigned char)86;
_Bool var_7 = (_Bool)0;
int var_9 = -1765416039;
long long int var_10 = 5285342650851619041LL;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 1056021008U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)739;
int zero = 0;
unsigned short var_18 = (unsigned short)24548;
_Bool var_19 = (_Bool)0;
int var_20 = 228357187;
short var_21 = (short)28113;
long long int var_22 = 7762552267095152456LL;
long long int var_23 = 7591567333374929003LL;
unsigned char var_24 = (unsigned char)95;
long long int var_25 = -2620588649866958738LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 8607266856210812476LL;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [14] ;
unsigned short arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned short arr_7 [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3588048599529405087ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)34456;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 104136524U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)50402;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 342125263U : 3461030866U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3349850509880549902ULL : 11085712688076589116ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
