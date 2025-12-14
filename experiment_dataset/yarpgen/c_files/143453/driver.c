#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44019;
unsigned short var_1 = (unsigned short)44988;
int var_3 = -1647113014;
long long int var_4 = 1003307178124140808LL;
unsigned long long int var_10 = 6796098714605230190ULL;
unsigned int var_11 = 1228020869U;
long long int var_13 = 1534984348072451647LL;
unsigned char var_14 = (unsigned char)144;
unsigned int var_15 = 1234672848U;
unsigned int var_16 = 2620110336U;
unsigned char var_18 = (unsigned char)241;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1452948437U;
short var_21 = (short)27320;
long long int var_22 = 8196440909202305624LL;
short var_23 = (short)-24018;
unsigned int var_24 = 1033539462U;
int var_25 = 630811523;
unsigned char var_26 = (unsigned char)67;
signed char var_27 = (signed char)-75;
unsigned char var_28 = (unsigned char)29;
short var_29 = (short)-16638;
unsigned short arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned char arr_2 [12] ;
long long int arr_4 [23] ;
long long int arr_5 [23] [23] ;
long long int arr_6 [23] [23] ;
unsigned char arr_12 [13] ;
_Bool arr_3 [12] [12] ;
unsigned long long int arr_7 [23] ;
unsigned int arr_8 [23] ;
unsigned short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)43933;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -213521650677817838LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -993463979490424913LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -3786004593527435143LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 18296821285550012716ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 3974788074U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)51871;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
