#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1629923792U;
_Bool var_4 = (_Bool)0;
short var_7 = (short)27170;
unsigned int var_10 = 4236850771U;
unsigned int var_11 = 2302561100U;
long long int var_13 = -5392877292895014407LL;
unsigned int var_14 = 2591148313U;
signed char var_15 = (signed char)-78;
unsigned char var_17 = (unsigned char)19;
int zero = 0;
unsigned long long int var_18 = 11664673579539038787ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)186;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1822127698404844684ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 17022131478376069457ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 12690147637076351832ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -676079484;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
