#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10099812340534849952ULL;
long long int var_1 = 3050680916905688988LL;
unsigned long long int var_2 = 16438719806737872728ULL;
long long int var_3 = -6762452916922032547LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-16813;
unsigned long long int var_7 = 4417452679012512165ULL;
unsigned int var_8 = 3620046183U;
int var_9 = -1858958564;
int zero = 0;
short var_10 = (short)-9704;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4836590579508107398ULL;
int var_13 = 1208278798;
unsigned short var_14 = (unsigned short)34380;
short var_15 = (short)-13005;
int var_16 = 1271530630;
long long int var_17 = 6427902249415944299LL;
unsigned short var_18 = (unsigned short)43234;
int var_19 = 328883477;
long long int var_20 = 841833621224869842LL;
long long int var_21 = 7696767522482404676LL;
long long int var_22 = 3860912580604486268LL;
unsigned long long int arr_0 [19] ;
signed char arr_3 [19] [19] ;
unsigned short arr_4 [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
long long int arr_7 [19] [19] [19] ;
short arr_13 [13] ;
unsigned long long int arr_16 [24] [24] ;
signed char arr_17 [24] [24] ;
_Bool arr_18 [24] ;
short arr_10 [19] [19] ;
short arr_11 [19] ;
long long int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15347787896233428498ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)7663;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10887795070080602902ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -6050575216589909137LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)-20929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 10783699625292585046ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)7320 : (short)7625;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-12870 : (short)-1238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 3683235918199827185LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
