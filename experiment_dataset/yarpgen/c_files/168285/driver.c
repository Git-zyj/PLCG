#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned short var_10 = (unsigned short)56943;
long long int var_12 = -31084215370015011LL;
int zero = 0;
long long int var_14 = 1426438465825106276LL;
long long int var_15 = 8926928812460702724LL;
unsigned int var_16 = 2357587400U;
long long int var_17 = -8355018907131067858LL;
unsigned long long int var_18 = 13979646043085177499ULL;
unsigned short var_19 = (unsigned short)7134;
unsigned long long int var_20 = 7179342623205974194ULL;
long long int var_21 = -8670192616613584482LL;
unsigned long long int var_22 = 15557365682479775167ULL;
unsigned short arr_0 [19] ;
unsigned short arr_5 [19] [19] [19] ;
unsigned char arr_6 [19] [19] [19] [19] ;
unsigned long long int arr_7 [21] ;
long long int arr_8 [21] ;
unsigned long long int arr_16 [21] [21] [21] [21] ;
long long int arr_18 [21] [21] [21] [21] [21] ;
unsigned int arr_20 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)40615;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)35382;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 5730188877924170416ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -2888093054053482146LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3707393991127774477ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -7135271121399733442LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 4106295431U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
