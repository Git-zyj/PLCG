#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13808;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-62;
int var_4 = -2016579384;
unsigned char var_5 = (unsigned char)212;
int var_8 = -1456347357;
unsigned short var_10 = (unsigned short)18669;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8096978258071995973ULL;
int zero = 0;
unsigned long long int var_15 = 3322399663234077993ULL;
long long int var_16 = 5791979897519957104LL;
unsigned long long int var_17 = 12610250801537030472ULL;
unsigned short var_18 = (unsigned short)64309;
unsigned int var_19 = 1365802480U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-17656;
signed char var_22 = (signed char)-124;
unsigned char var_23 = (unsigned char)118;
long long int var_24 = -3253177530413630680LL;
unsigned char arr_0 [24] ;
long long int arr_1 [24] ;
long long int arr_3 [24] ;
_Bool arr_5 [24] ;
unsigned short arr_6 [24] ;
unsigned int arr_8 [24] [24] [24] ;
long long int arr_9 [24] [24] [24] ;
unsigned char arr_17 [24] [24] [24] [24] ;
_Bool arr_11 [24] [24] [24] ;
unsigned long long int arr_20 [24] [24] [24] ;
short arr_21 [24] [24] [24] [24] ;
short arr_24 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -4748037966526526224LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4382074637655962472LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)38377;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1456904071U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -793036522231333266LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2212398880968095915ULL : 10705491386948014321ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)10717 : (short)17810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (short)-14880;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
