#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3637505871526510988ULL;
short var_1 = (short)-12654;
long long int var_2 = -4457643430555372809LL;
long long int var_3 = -3525714077119626544LL;
long long int var_4 = 8928940105118007464LL;
short var_5 = (short)7197;
long long int var_7 = -3174736806182227341LL;
unsigned char var_8 = (unsigned char)17;
long long int var_11 = 2420052686842306916LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)95;
unsigned long long int var_15 = 6250881102619442687ULL;
int zero = 0;
short var_18 = (short)-21401;
short var_19 = (short)31937;
long long int var_20 = -3573582347536776524LL;
unsigned char var_21 = (unsigned char)91;
long long int var_22 = -7070685170472943207LL;
long long int var_23 = 7744314713982498875LL;
long long int var_24 = 4630297370890795381LL;
_Bool var_25 = (_Bool)1;
long long int arr_0 [19] ;
long long int arr_2 [19] [19] ;
unsigned int arr_5 [15] ;
unsigned char arr_8 [15] ;
unsigned long long int arr_9 [15] ;
short arr_3 [19] ;
short arr_7 [15] [15] ;
unsigned long long int arr_10 [15] [15] ;
unsigned long long int arr_11 [15] [15] ;
unsigned char arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -8864194508518072706LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 4806271641483936605LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3391338241U : 3842840246U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 13814854985239448431ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-9607;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31510 : (short)-15061;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 17242700717756174685ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 6547862054000845281ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)201;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
