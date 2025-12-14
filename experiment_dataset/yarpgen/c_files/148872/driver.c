#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 398044341;
signed char var_1 = (signed char)-120;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6644550683010823494LL;
int var_7 = 1996650856;
unsigned int var_8 = 2561538889U;
unsigned char var_9 = (unsigned char)7;
int zero = 0;
unsigned long long int var_12 = 5858343388883414471ULL;
signed char var_13 = (signed char)-53;
int var_14 = 1046997472;
unsigned long long int var_15 = 13279871268363869571ULL;
int var_16 = 45060131;
unsigned int var_17 = 4087826080U;
unsigned char var_18 = (unsigned char)171;
signed char var_19 = (signed char)19;
short var_20 = (short)11528;
unsigned short var_21 = (unsigned short)33070;
unsigned int arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] [10] [10] ;
unsigned short arr_4 [10] [10] ;
_Bool arr_5 [10] [10] [10] ;
signed char arr_8 [24] ;
int arr_11 [24] ;
short arr_12 [24] [24] [24] ;
unsigned short arr_13 [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] ;
unsigned long long int arr_19 [24] ;
unsigned char arr_6 [10] ;
unsigned long long int arr_7 [10] ;
unsigned char arr_15 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2032951741U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29820 : (unsigned short)13726;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 567198791U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)43256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = -804459640;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-17156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)59411;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1817118208228961670ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 12092346923199588311ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15355406974260648944ULL : 5139576201076035939ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)169;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
