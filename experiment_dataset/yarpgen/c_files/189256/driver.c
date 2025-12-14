#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1560288066772132818LL;
unsigned char var_6 = (unsigned char)232;
unsigned char var_7 = (unsigned char)135;
unsigned short var_9 = (unsigned short)14546;
unsigned char var_10 = (unsigned char)16;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)64;
unsigned long long int var_15 = 7684185768876146866ULL;
long long int var_16 = -1104395265624406754LL;
unsigned char var_17 = (unsigned char)50;
unsigned char var_18 = (unsigned char)50;
unsigned int var_19 = 3975149994U;
signed char var_20 = (signed char)-14;
unsigned char var_21 = (unsigned char)6;
long long int var_22 = -984350075798943213LL;
unsigned char var_23 = (unsigned char)230;
unsigned char var_24 = (unsigned char)160;
unsigned long long int var_25 = 15202129379924253404ULL;
unsigned char var_26 = (unsigned char)133;
unsigned long long int var_27 = 10258519919224231731ULL;
long long int var_28 = 8578518234899372876LL;
signed char var_29 = (signed char)45;
unsigned long long int var_30 = 16214055036430050676ULL;
unsigned long long int var_31 = 4887897680347672710ULL;
int var_32 = -824553932;
unsigned char var_33 = (unsigned char)255;
unsigned char arr_1 [20] [20] ;
unsigned int arr_3 [20] ;
signed char arr_4 [20] [20] [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
unsigned short arr_8 [20] [20] [20] ;
int arr_11 [20] [20] [20] [20] ;
unsigned int arr_12 [20] [20] ;
short arr_13 [20] ;
unsigned int arr_14 [20] ;
unsigned char arr_17 [11] [11] ;
_Bool arr_20 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3208949655U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)53007;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -580043736;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 3910544359U : 4150345244U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (short)21706;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 2062075347U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
