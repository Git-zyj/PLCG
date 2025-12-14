#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64215;
long long int var_1 = -6023902349001754014LL;
unsigned int var_2 = 3294160658U;
int var_3 = -225236114;
long long int var_4 = -2709457998305718521LL;
signed char var_6 = (signed char)-120;
unsigned long long int var_8 = 12927039657931858024ULL;
unsigned long long int var_9 = 14685922391971174036ULL;
signed char var_10 = (signed char)36;
unsigned long long int var_11 = 11488190383736013714ULL;
int var_13 = 968960002;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)68;
unsigned long long int var_16 = 9301845010221972340ULL;
int zero = 0;
unsigned int var_17 = 2357886992U;
unsigned char var_18 = (unsigned char)207;
unsigned long long int var_19 = 16224798902313448401ULL;
signed char var_20 = (signed char)87;
long long int var_21 = -7701631878109726278LL;
unsigned int var_22 = 2794929650U;
_Bool var_23 = (_Bool)0;
long long int var_24 = -8115025547760890025LL;
unsigned int var_25 = 2180235076U;
signed char var_26 = (signed char)124;
int arr_0 [14] ;
signed char arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned int arr_5 [17] [17] ;
unsigned char arr_6 [17] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_7 [17] [17] ;
unsigned long long int arr_10 [13] [13] ;
short arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2088412957;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 15051664825197488631ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 3946762647U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 822632477135162604ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 3591630581U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 14884453431861814557ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-23558;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
