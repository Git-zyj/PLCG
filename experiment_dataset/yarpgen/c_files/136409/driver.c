#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17564;
signed char var_3 = (signed char)-52;
int var_4 = 366491554;
unsigned char var_5 = (unsigned char)131;
long long int var_6 = 2995146420484521390LL;
unsigned int var_9 = 4160363420U;
long long int var_10 = -6631400448522393648LL;
unsigned short var_14 = (unsigned short)52350;
short var_15 = (short)-27261;
int zero = 0;
short var_17 = (short)-22534;
unsigned char var_18 = (unsigned char)246;
unsigned short var_19 = (unsigned short)34856;
unsigned long long int var_20 = 13695030373620336835ULL;
unsigned short var_21 = (unsigned short)25319;
unsigned short var_22 = (unsigned short)44281;
unsigned int var_23 = 3491139686U;
_Bool var_24 = (_Bool)0;
short var_25 = (short)2385;
unsigned short var_26 = (unsigned short)62024;
short var_27 = (short)-7386;
signed char arr_0 [21] ;
int arr_1 [21] ;
unsigned short arr_2 [21] ;
signed char arr_5 [21] [21] [21] ;
unsigned char arr_6 [21] ;
signed char arr_11 [19] [19] ;
int arr_13 [19] [19] [19] ;
unsigned short arr_3 [21] ;
long long int arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1897529709;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)63215;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1589423048;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)15984;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 744776393771091299LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
