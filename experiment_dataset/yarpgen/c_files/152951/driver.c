#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14871267830513687558ULL;
short var_2 = (short)18194;
unsigned int var_3 = 2945836494U;
_Bool var_4 = (_Bool)0;
int var_5 = -1898373413;
short var_6 = (short)11084;
unsigned int var_7 = 4259273460U;
unsigned short var_12 = (unsigned short)17325;
short var_13 = (short)-30064;
_Bool var_15 = (_Bool)1;
int var_17 = 516533088;
int zero = 0;
unsigned int var_18 = 301433937U;
unsigned short var_19 = (unsigned short)5553;
unsigned int var_20 = 2313706344U;
unsigned int var_21 = 834340782U;
unsigned short var_22 = (unsigned short)20838;
signed char var_23 = (signed char)-11;
signed char var_24 = (signed char)-78;
unsigned short var_25 = (unsigned short)29561;
long long int var_26 = 7696839946027597668LL;
unsigned short var_27 = (unsigned short)41253;
int var_28 = -1062919119;
unsigned char var_29 = (unsigned char)139;
unsigned long long int var_30 = 6032623562043924185ULL;
signed char var_31 = (signed char)15;
unsigned char var_32 = (unsigned char)35;
signed char var_33 = (signed char)-11;
signed char var_34 = (signed char)89;
int arr_0 [25] ;
int arr_3 [25] ;
long long int arr_4 [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] [22] ;
unsigned char arr_18 [15] [15] ;
signed char arr_13 [22] [22] [22] [22] ;
unsigned int arr_14 [22] [22] [22] [22] ;
unsigned char arr_17 [15] [15] ;
long long int arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1367270272 : -816038649;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -803551663;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 5328540962856454703LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 17798638003104940104ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 4133772151U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = -871834888788883226LL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
