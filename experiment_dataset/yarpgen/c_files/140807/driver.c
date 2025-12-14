#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3789493369U;
int var_1 = -2120935520;
unsigned char var_4 = (unsigned char)204;
short var_5 = (short)32698;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)74;
unsigned short var_8 = (unsigned short)19506;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 4102699196657027345ULL;
unsigned long long int var_13 = 4349100741273155781ULL;
unsigned long long int var_14 = 9555986457663025735ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)65;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)35440;
unsigned long long int var_19 = 4043780489774987250ULL;
unsigned long long int var_20 = 4088064192775863252ULL;
short var_21 = (short)-8442;
signed char var_22 = (signed char)105;
signed char var_23 = (signed char)23;
unsigned short var_24 = (unsigned short)2074;
short var_25 = (short)5032;
signed char var_26 = (signed char)-42;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 1713751584072914291ULL;
long long int var_30 = -7368931876407476317LL;
unsigned long long int var_31 = 14347322448161175643ULL;
int arr_6 [23] ;
unsigned int arr_14 [24] [24] ;
unsigned int arr_23 [24] ;
unsigned short arr_29 [24] [24] [24] ;
_Bool arr_30 [24] ;
int arr_32 [24] [24] [24] [24] ;
unsigned char arr_38 [24] [24] [24] [24] ;
unsigned long long int arr_8 [23] [23] [23] ;
unsigned long long int arr_12 [23] [23] [23] ;
unsigned short arr_13 [23] ;
unsigned char arr_36 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1433975401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 3697792894U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 2161428696U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)12545;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 923604082;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)1 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12785150750397340982ULL : 12553218934788403613ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4709451039329489169ULL : 8364147293560079894ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56908 : (unsigned short)13463;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)13;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
