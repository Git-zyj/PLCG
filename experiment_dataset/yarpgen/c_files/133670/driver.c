#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3999169382U;
unsigned char var_2 = (unsigned char)66;
signed char var_3 = (signed char)68;
_Bool var_4 = (_Bool)0;
unsigned char var_9 = (unsigned char)196;
unsigned short var_10 = (unsigned short)1463;
short var_11 = (short)28692;
short var_12 = (short)22015;
signed char var_13 = (signed char)49;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)253;
unsigned int var_17 = 1036920604U;
int zero = 0;
short var_18 = (short)8421;
signed char var_19 = (signed char)117;
long long int var_20 = -2846411584588722350LL;
unsigned char var_21 = (unsigned char)193;
short var_22 = (short)-27667;
int var_23 = 233685001;
unsigned long long int var_24 = 1082868794651426906ULL;
long long int var_25 = 7627948851721553369LL;
int var_26 = 847458177;
signed char var_27 = (signed char)9;
signed char var_28 = (signed char)-127;
_Bool var_29 = (_Bool)1;
_Bool arr_0 [23] [23] ;
_Bool arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
int arr_5 [23] [23] ;
short arr_6 [23] ;
long long int arr_7 [23] [23] [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1437663877627615188ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1035999929 : 1760698227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)13253 : (short)-12836;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9010302323066435859LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)98;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
