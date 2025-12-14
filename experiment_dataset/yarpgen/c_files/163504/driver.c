#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6041133840573424716ULL;
signed char var_1 = (signed char)-93;
short var_2 = (short)27382;
unsigned short var_3 = (unsigned short)50684;
unsigned short var_4 = (unsigned short)54559;
short var_5 = (short)-7532;
unsigned char var_7 = (unsigned char)13;
int var_8 = 56821879;
unsigned long long int var_10 = 1550188244711849421ULL;
unsigned int var_11 = 617603883U;
int var_12 = 1678610248;
short var_14 = (short)1197;
long long int var_16 = 2956127286393127711LL;
short var_17 = (short)-29846;
int var_18 = 2029717237;
int var_19 = 879111671;
int zero = 0;
short var_20 = (short)-22461;
long long int var_21 = 8511174334006790944LL;
signed char var_22 = (signed char)-41;
unsigned long long int var_23 = 2853514006870304777ULL;
unsigned int var_24 = 2566952886U;
unsigned int var_25 = 1297804066U;
unsigned short var_26 = (unsigned short)13999;
int var_27 = 1413221420;
unsigned short var_28 = (unsigned short)30112;
unsigned int var_29 = 793666095U;
unsigned int var_30 = 3039940482U;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)158;
unsigned int var_33 = 2157223972U;
unsigned int var_34 = 2709348409U;
unsigned int var_35 = 1290714999U;
short var_36 = (short)4844;
_Bool arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned short arr_8 [21] [21] [21] ;
long long int arr_10 [21] [21] ;
short arr_11 [21] [21] [21] [21] ;
long long int arr_12 [21] [21] [21] ;
unsigned int arr_19 [21] ;
unsigned char arr_15 [21] ;
unsigned char arr_16 [21] [21] [21] ;
_Bool arr_20 [21] ;
unsigned short arr_21 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)61377;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)38134 : (unsigned short)13387;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -5777300032159114063LL : 2766263239990447725LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)30058;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 906395802303326993LL : 7064651969828547021LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 2968413180U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)108 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)28542 : (unsigned short)416;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
