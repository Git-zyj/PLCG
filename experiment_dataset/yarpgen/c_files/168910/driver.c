#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8549895001271664433ULL;
int var_1 = -2117101045;
signed char var_2 = (signed char)35;
long long int var_3 = 58518688331610102LL;
short var_4 = (short)26799;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 1706617736U;
unsigned char var_13 = (unsigned char)104;
unsigned int var_14 = 1944997985U;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
long long int var_16 = -2938320835755436670LL;
long long int var_17 = 8367043685771981643LL;
long long int var_18 = -6989537962857256454LL;
unsigned short var_19 = (unsigned short)29946;
int var_20 = -992761460;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)195;
unsigned char var_23 = (unsigned char)114;
signed char var_24 = (signed char)111;
unsigned long long int var_25 = 1321693986918405567ULL;
long long int var_26 = -1997762457218625422LL;
int var_27 = 480568884;
long long int var_28 = 8841561125024918713LL;
int var_29 = 1323855433;
short var_30 = (short)23653;
unsigned int var_31 = 1564942915U;
_Bool var_32 = (_Bool)0;
int arr_0 [17] ;
_Bool arr_3 [17] ;
long long int arr_8 [17] ;
signed char arr_9 [17] ;
unsigned int arr_10 [17] [17] [17] [17] [17] ;
_Bool arr_13 [10] ;
signed char arr_19 [10] [10] [10] ;
short arr_24 [19] ;
signed char arr_32 [18] [18] ;
long long int arr_36 [18] [18] ;
signed char arr_12 [17] [17] [17] [17] [17] ;
unsigned int arr_31 [19] ;
unsigned int arr_37 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -515431019;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 8613386170173516139LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 3347330793U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (short)14441;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_36 [i_0] [i_1] = 3383637692979815904LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = 736493962U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = 1723602207U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
