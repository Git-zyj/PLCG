#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 240216071U;
signed char var_1 = (signed char)-6;
unsigned int var_2 = 4253198753U;
signed char var_3 = (signed char)-31;
signed char var_4 = (signed char)-9;
signed char var_5 = (signed char)-88;
int var_6 = 1908024562;
signed char var_7 = (signed char)37;
int var_9 = -1516875370;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12421598685153484153ULL;
unsigned long long int var_16 = 10941718832883666406ULL;
int zero = 0;
unsigned long long int var_18 = 16335546170997321547ULL;
long long int var_19 = 1674490899421855195LL;
unsigned char var_20 = (unsigned char)80;
signed char var_21 = (signed char)105;
unsigned char var_22 = (unsigned char)213;
unsigned int var_23 = 465816523U;
unsigned int var_24 = 3672878511U;
long long int var_25 = -3889999307857152467LL;
signed char var_26 = (signed char)-68;
short arr_0 [17] ;
unsigned char arr_1 [17] ;
long long int arr_6 [17] ;
signed char arr_9 [12] ;
long long int arr_21 [12] [12] [12] [12] ;
short arr_22 [12] [12] [12] [12] ;
unsigned int arr_27 [12] ;
unsigned int arr_12 [12] ;
int arr_24 [12] [12] [12] ;
unsigned short arr_25 [12] ;
long long int arr_28 [12] ;
unsigned int arr_29 [12] ;
unsigned int arr_30 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)13080;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1198608909911342717LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 36997157577231648LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-21984 : (short)-27085;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = 3006385072U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 1526832749U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 374904067 : 783088241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (unsigned short)35153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = -6352673417007086409LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = 3885023383U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = 3234963728U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
