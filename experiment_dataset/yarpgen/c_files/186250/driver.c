#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1286763264;
int var_2 = 1850604578;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-21055;
unsigned short var_5 = (unsigned short)15515;
unsigned long long int var_6 = 2551861969745641859ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 3831902260955962474ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)9096;
int zero = 0;
unsigned long long int var_12 = 17867665385848111481ULL;
unsigned short var_13 = (unsigned short)62562;
unsigned int var_14 = 4286974616U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)28382;
int var_18 = 1759633435;
unsigned long long int var_19 = 7502282225263371932ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)46;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [19] ;
_Bool arr_1 [19] [19] ;
short arr_11 [23] ;
int arr_12 [23] ;
unsigned char arr_13 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (short)31782;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -1384111017;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)188;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
