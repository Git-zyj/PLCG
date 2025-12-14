#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -239478889;
long long int var_11 = -7508709294023446417LL;
unsigned int var_13 = 824014127U;
long long int var_14 = 2946510999502499416LL;
unsigned int var_15 = 787750635U;
unsigned long long int var_17 = 9100718454301900217ULL;
int zero = 0;
unsigned int var_19 = 1212093594U;
unsigned char var_20 = (unsigned char)60;
int var_21 = 803768135;
unsigned long long int var_22 = 12660595386503422292ULL;
short var_23 = (short)-3135;
short var_24 = (short)-24984;
unsigned long long int var_25 = 3429404653277623771ULL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3961435808U;
long long int var_28 = -321537195297122281LL;
unsigned int var_29 = 2205299785U;
unsigned long long int var_30 = 15844277892803409477ULL;
signed char var_31 = (signed char)94;
unsigned long long int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
signed char arr_2 [23] [23] [23] ;
int arr_3 [23] [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned char arr_6 [23] [23] ;
unsigned long long int arr_11 [23] ;
short arr_12 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 12964913358365050585ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-13 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1126091816;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 10664093890001333571ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-6869 : (short)29826;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
