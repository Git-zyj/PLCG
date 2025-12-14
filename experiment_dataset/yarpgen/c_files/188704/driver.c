#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -663561822;
long long int var_2 = 3988793986987058504LL;
int var_3 = -999396244;
long long int var_4 = 8953987087532114624LL;
signed char var_5 = (signed char)-88;
unsigned long long int var_6 = 16828823092766973445ULL;
int var_7 = 1283044911;
signed char var_9 = (signed char)-15;
long long int var_10 = -3766316786337029149LL;
signed char var_12 = (signed char)25;
long long int var_13 = 7580262517587759034LL;
int var_14 = -1062439921;
int var_15 = 865458671;
unsigned long long int var_16 = 5274992794119850919ULL;
int zero = 0;
int var_17 = 1661933960;
unsigned short var_18 = (unsigned short)31514;
signed char var_19 = (signed char)-60;
long long int var_20 = -5078079122474185163LL;
int var_21 = -170452720;
long long int var_22 = 9141590992528546309LL;
int var_23 = -1214693533;
signed char var_24 = (signed char)-111;
signed char var_25 = (signed char)34;
signed char var_26 = (signed char)-78;
signed char var_27 = (signed char)-111;
signed char var_28 = (signed char)-105;
signed char var_29 = (signed char)32;
signed char var_30 = (signed char)-81;
int var_31 = -139783119;
signed char var_32 = (signed char)-2;
signed char var_33 = (signed char)-2;
int arr_5 [18] [18] ;
signed char arr_7 [18] ;
signed char arr_8 [18] ;
signed char arr_9 [18] ;
signed char arr_11 [18] [18] ;
signed char arr_12 [18] ;
int arr_19 [16] [16] ;
long long int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -2051193426;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 1327816038 : -118458289;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = -59874329788095196LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
