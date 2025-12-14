#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned short var_6 = (unsigned short)55435;
unsigned short var_7 = (unsigned short)28228;
unsigned char var_9 = (unsigned char)16;
unsigned long long int var_14 = 1487878294811860246ULL;
unsigned short var_15 = (unsigned short)18084;
unsigned long long int var_16 = 3925551749531737668ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
unsigned char var_18 = (unsigned char)190;
unsigned char var_19 = (unsigned char)9;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)143;
unsigned long long int var_22 = 9062441447335670028ULL;
unsigned long long int var_23 = 15931079028382060491ULL;
unsigned char var_24 = (unsigned char)195;
unsigned long long int var_25 = 4404173852789916354ULL;
unsigned char var_26 = (unsigned char)43;
unsigned short var_27 = (unsigned short)41967;
unsigned long long int var_28 = 14860829464456850092ULL;
unsigned long long int var_29 = 13212447612523231785ULL;
unsigned long long int var_30 = 11246857788231758375ULL;
unsigned long long int var_31 = 10198171628414032352ULL;
unsigned long long int arr_4 [16] ;
unsigned char arr_5 [16] ;
unsigned short arr_6 [25] ;
unsigned short arr_7 [25] ;
unsigned char arr_9 [11] ;
unsigned char arr_10 [11] [11] ;
unsigned short arr_15 [11] [11] [11] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 10756952581702920042ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)13613;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)28701;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)118 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)13309 : (unsigned short)20811;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 11507702954344947359ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)229 : (unsigned char)20;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
