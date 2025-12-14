#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
unsigned long long int var_1 = 4625308405838445701ULL;
unsigned long long int var_3 = 12933823872905387041ULL;
unsigned char var_4 = (unsigned char)84;
unsigned short var_5 = (unsigned short)62136;
unsigned short var_6 = (unsigned short)24593;
unsigned int var_7 = 1750165744U;
unsigned long long int var_8 = 2501270118384782495ULL;
unsigned short var_9 = (unsigned short)47490;
int var_10 = -1378475750;
unsigned long long int var_11 = 320257097164909868ULL;
unsigned int var_12 = 778260044U;
short var_13 = (short)-25824;
unsigned char var_14 = (unsigned char)145;
int var_15 = -783718501;
unsigned short var_16 = (unsigned short)8424;
unsigned long long int var_17 = 9814272774478697937ULL;
int zero = 0;
long long int var_18 = -4963313705438218563LL;
long long int var_19 = 146355937149594052LL;
unsigned int var_20 = 155658860U;
unsigned short var_21 = (unsigned short)20427;
unsigned short var_22 = (unsigned short)25651;
unsigned char var_23 = (unsigned char)108;
long long int var_24 = -6625232313072596976LL;
unsigned long long int var_25 = 10763009583999349559ULL;
unsigned char var_26 = (unsigned char)30;
short var_27 = (short)24130;
unsigned short var_28 = (unsigned short)5354;
unsigned char arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
long long int arr_3 [22] ;
unsigned char arr_5 [22] ;
unsigned int arr_6 [22] [22] [22] ;
unsigned long long int arr_8 [22] ;
unsigned long long int arr_9 [22] ;
unsigned char arr_10 [22] ;
short arr_2 [22] [22] ;
unsigned short arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3466002401U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3000793297616428628LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 327803601U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 4196317547006902122ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2762214438873148094ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22259;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)16703;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
