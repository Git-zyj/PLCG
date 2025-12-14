#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1447711594U;
long long int var_4 = -28543099422261465LL;
unsigned short var_5 = (unsigned short)47789;
unsigned char var_6 = (unsigned char)157;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-81;
unsigned int var_9 = 629504420U;
signed char var_10 = (signed char)-13;
unsigned long long int var_11 = 10901204836311331226ULL;
unsigned short var_12 = (unsigned short)53237;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 6020942291364178499ULL;
int var_17 = -456863763;
unsigned short var_18 = (unsigned short)40797;
int var_19 = 1072261086;
unsigned long long int var_20 = 11020175614737240076ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3569473676U;
int var_23 = -748968538;
unsigned int var_24 = 3330859431U;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 350704110U;
int var_27 = 1887911616;
unsigned long long int var_28 = 13922294486547553479ULL;
int var_29 = -35533325;
_Bool var_30 = (_Bool)0;
long long int arr_0 [20] ;
signed char arr_1 [20] [20] ;
_Bool arr_10 [20] [20] ;
_Bool arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 8964223240693518123LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
