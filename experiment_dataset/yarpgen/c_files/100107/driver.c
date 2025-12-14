#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21542;
short var_1 = (short)20101;
unsigned int var_2 = 3493009205U;
short var_3 = (short)-29755;
unsigned int var_4 = 3738799008U;
unsigned int var_6 = 1990128072U;
short var_8 = (short)-7661;
short var_9 = (short)1603;
unsigned int var_10 = 3491937653U;
unsigned int var_11 = 4278409692U;
unsigned int var_12 = 178793072U;
int zero = 0;
short var_13 = (short)3216;
short var_14 = (short)24722;
short var_15 = (short)-7377;
short var_16 = (short)-9284;
short var_17 = (short)-27636;
unsigned int var_18 = 1584459253U;
unsigned int var_19 = 2690536824U;
short var_20 = (short)8027;
short var_21 = (short)28161;
short var_22 = (short)-12682;
short var_23 = (short)-2622;
short var_24 = (short)26155;
short var_25 = (short)24493;
short var_26 = (short)-5577;
unsigned int var_27 = 2113359286U;
short var_28 = (short)-22843;
short var_29 = (short)16226;
unsigned int var_30 = 4246659121U;
short arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
unsigned int arr_4 [23] [23] ;
short arr_5 [23] ;
short arr_6 [23] [23] ;
unsigned int arr_7 [23] [23] ;
short arr_8 [23] ;
short arr_10 [23] [23] ;
unsigned int arr_13 [21] ;
unsigned int arr_15 [21] ;
unsigned int arr_17 [21] [21] ;
short arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
unsigned int arr_14 [21] ;
unsigned int arr_18 [21] ;
unsigned int arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)31292;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 444745504U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 3619129315U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)30693;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)15389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 793616893U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-10597;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)3120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 1837300602U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 3579530759U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 556820939U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-28044;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 2222101714U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 2724943838U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 4099327646U : 2602902409U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 2232005105U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
