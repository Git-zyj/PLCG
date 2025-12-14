#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61232;
_Bool var_3 = (_Bool)0;
short var_4 = (short)9519;
unsigned int var_5 = 1282640911U;
short var_6 = (short)17817;
unsigned int var_7 = 1216768947U;
unsigned char var_8 = (unsigned char)226;
short var_9 = (short)-1673;
unsigned short var_11 = (unsigned short)44839;
int zero = 0;
unsigned char var_12 = (unsigned char)117;
unsigned int var_13 = 3839360373U;
long long int var_14 = 3085638996914634338LL;
short var_15 = (short)30282;
long long int var_16 = -7557230988616505113LL;
unsigned int var_17 = 4225520909U;
unsigned char var_18 = (unsigned char)168;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4053770124288042398ULL;
int var_21 = 198885117;
int var_22 = 2132010784;
signed char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
short arr_3 [15] [15] ;
long long int arr_5 [13] [13] ;
int arr_7 [13] ;
_Bool arr_8 [13] [13] [13] ;
unsigned int arr_10 [13] [13] ;
unsigned int arr_4 [15] ;
unsigned int arr_11 [13] [13] ;
long long int arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 15574204152429824700ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)15256;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1847309163454131967LL : 5351077913931544815LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1620566250 : -430262875;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 285961098U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3367021177U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 1260468462U : 1743258380U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2126380631719861892LL : -8714973979207197241LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
