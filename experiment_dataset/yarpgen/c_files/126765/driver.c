#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1661783750;
int var_2 = -1363900500;
long long int var_3 = -6337340719396792735LL;
unsigned long long int var_5 = 4521501629866334962ULL;
long long int var_7 = 7330620019301839291LL;
int var_9 = -456662558;
int var_10 = 974848841;
unsigned long long int var_11 = 10326438746657716395ULL;
int var_12 = 1691178060;
long long int var_15 = 2338146458711145596LL;
unsigned long long int var_17 = 4745998789145688607ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)173;
unsigned char var_19 = (unsigned char)254;
unsigned long long int var_20 = 15342671426826930028ULL;
int var_21 = -495767806;
unsigned long long int var_22 = 12355358409682680659ULL;
unsigned long long int var_23 = 10837832021965091677ULL;
long long int var_24 = 7243496750565717131LL;
long long int var_25 = 2026713165916689824LL;
unsigned long long int var_26 = 3606062273265823835ULL;
int var_27 = 1616956914;
int var_28 = 1043745678;
unsigned long long int var_29 = 3390839387642383729ULL;
int arr_4 [10] ;
int arr_9 [21] [21] ;
unsigned long long int arr_10 [21] ;
unsigned short arr_12 [21] [21] [21] ;
int arr_18 [21] [21] [21] ;
unsigned long long int arr_2 [10] ;
unsigned char arr_6 [10] [10] [10] ;
long long int arr_15 [21] [21] [21] ;
unsigned char arr_16 [21] [21] [21] ;
int arr_19 [21] ;
int arr_20 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -378942444;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = -1931117679;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 14652016920370615366ULL : 9880538365507279375ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)43029;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -905115488;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 10211958643617171141ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -8375652630070949842LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 333443267;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -1672030274;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
