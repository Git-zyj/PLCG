#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8018719744690420371LL;
unsigned long long int var_4 = 15120119038596782773ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3615053317U;
short var_7 = (short)25009;
unsigned short var_9 = (unsigned short)50360;
unsigned long long int var_11 = 18365208803800365909ULL;
unsigned int var_12 = 565903571U;
unsigned char var_13 = (unsigned char)52;
int zero = 0;
signed char var_15 = (signed char)41;
unsigned long long int var_16 = 17057474089860552127ULL;
unsigned long long int var_17 = 7817113033106852789ULL;
int var_18 = -860698481;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)42;
unsigned char var_21 = (unsigned char)19;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-65;
signed char var_24 = (signed char)98;
unsigned long long int var_25 = 10825763855124092154ULL;
unsigned int var_26 = 505009076U;
int var_27 = -1179020455;
unsigned short var_28 = (unsigned short)61741;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_2 [13] [13] ;
_Bool arr_6 [19] [19] ;
unsigned int arr_7 [19] ;
long long int arr_10 [22] ;
long long int arr_12 [22] ;
unsigned char arr_3 [13] ;
unsigned short arr_4 [13] ;
short arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -1357213655625692752LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 16018435935978429190ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 9019071388434712983LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1304081214U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -5080037720732916574LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -8402626262716268029LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)39262;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)-16091;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
