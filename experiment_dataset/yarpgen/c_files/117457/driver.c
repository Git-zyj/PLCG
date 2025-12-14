#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1204780048028022651LL;
long long int var_1 = 6746008069516202995LL;
short var_2 = (short)29326;
unsigned int var_4 = 2048451478U;
unsigned char var_6 = (unsigned char)138;
unsigned short var_9 = (unsigned short)54328;
unsigned char var_10 = (unsigned char)68;
short var_13 = (short)10407;
unsigned short var_14 = (unsigned short)18812;
short var_15 = (short)11359;
int zero = 0;
signed char var_16 = (signed char)-2;
unsigned int var_17 = 889702678U;
int var_18 = 179737772;
unsigned char var_19 = (unsigned char)33;
unsigned long long int var_20 = 1507445838637742543ULL;
int var_21 = -949009817;
long long int var_22 = 6876186059765649504LL;
short var_23 = (short)-27559;
short var_24 = (short)18326;
signed char arr_2 [19] ;
unsigned char arr_4 [19] ;
unsigned int arr_11 [19] [19] [19] [19] [19] [19] ;
signed char arr_12 [19] [19] [19] [19] ;
short arr_13 [19] [19] ;
long long int arr_14 [19] ;
short arr_15 [19] [19] ;
short arr_19 [19] [19] [19] [19] ;
long long int arr_20 [19] ;
short arr_21 [19] ;
long long int arr_25 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 20617740U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-32376;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 9152142697842819620LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (short)20569;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)-28117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 425507954164965120LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (short)-10421;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = 3364375969542868632LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
