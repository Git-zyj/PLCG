#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2949442742490215203LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6447940999721836814LL;
int var_10 = -321488674;
short var_12 = (short)-14352;
unsigned long long int var_14 = 10314742476421041275ULL;
signed char var_16 = (signed char)-24;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 10636546637553445697ULL;
signed char var_19 = (signed char)-105;
unsigned long long int var_20 = 10234528101617420663ULL;
int var_21 = 1724693969;
signed char var_22 = (signed char)30;
signed char var_23 = (signed char)30;
_Bool var_24 = (_Bool)1;
short var_25 = (short)13745;
short var_26 = (short)-1388;
unsigned long long int var_27 = 18070186040197489895ULL;
short arr_0 [18] ;
unsigned long long int arr_3 [18] ;
long long int arr_12 [18] [18] [18] [18] ;
int arr_13 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-16875;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 423281163352389506ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -2862039765296224112LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1896956778;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
