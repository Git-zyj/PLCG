#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23137;
unsigned char var_8 = (unsigned char)250;
unsigned short var_12 = (unsigned short)7336;
int zero = 0;
unsigned short var_16 = (unsigned short)10900;
long long int var_17 = -7440337130088693459LL;
unsigned short var_18 = (unsigned short)62984;
short var_19 = (short)23883;
int var_20 = -1587191763;
int var_21 = -1917132705;
unsigned short var_22 = (unsigned short)28891;
int var_23 = -1169482388;
short var_24 = (short)-1191;
short var_25 = (short)-2632;
unsigned int var_26 = 3123665081U;
short var_27 = (short)25787;
long long int var_28 = 4565187313713639399LL;
int var_29 = 1798955623;
unsigned short var_30 = (unsigned short)32243;
unsigned int arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned char arr_3 [17] [17] ;
unsigned short arr_9 [17] ;
int arr_10 [11] ;
long long int arr_13 [11] [11] ;
int arr_15 [11] [11] ;
short arr_17 [11] [11] [11] [11] ;
short arr_25 [11] ;
unsigned char arr_27 [11] ;
unsigned short arr_28 [11] [11] [11] ;
short arr_26 [11] ;
unsigned char arr_29 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2861632822U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24543;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59413 : (unsigned short)13396;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -1987785529;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 6375714641974389751LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = -916272016;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)21229;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (short)4398;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned short)20263;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (short)-12263;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)225;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
