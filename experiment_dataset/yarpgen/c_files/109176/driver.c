#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4746616441813462985ULL;
short var_1 = (short)-15738;
int var_2 = 1533246645;
unsigned short var_3 = (unsigned short)19452;
unsigned short var_8 = (unsigned short)59801;
short var_10 = (short)15715;
unsigned int var_11 = 4138827517U;
int var_12 = -2097964614;
int zero = 0;
unsigned short var_14 = (unsigned short)16315;
short var_15 = (short)-3449;
unsigned long long int var_16 = 3000289832324231551ULL;
unsigned short var_17 = (unsigned short)62632;
unsigned short var_18 = (unsigned short)54003;
unsigned int var_19 = 3172916630U;
unsigned char var_20 = (unsigned char)7;
int var_21 = 580967939;
unsigned short var_22 = (unsigned short)47073;
short var_23 = (short)3474;
int var_24 = 1725422565;
int var_25 = -1864054522;
unsigned short var_26 = (unsigned short)20981;
unsigned int var_27 = 3497313075U;
int var_28 = 1798099747;
unsigned short var_29 = (unsigned short)21454;
short var_30 = (short)16891;
unsigned short var_31 = (unsigned short)29908;
unsigned char arr_1 [15] ;
int arr_2 [15] [15] [15] ;
unsigned char arr_6 [15] ;
unsigned long long int arr_7 [15] [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] [15] [15] ;
unsigned short arr_9 [15] [15] [15] [15] ;
unsigned short arr_22 [15] [15] [15] ;
unsigned int arr_32 [21] ;
_Bool arr_25 [15] [15] ;
unsigned short arr_29 [15] ;
unsigned short arr_30 [15] [15] [15] ;
int arr_35 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1700078606 : 508246126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 12997995885244121218ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)31602 : (unsigned short)2947;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39960;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)46980 : (unsigned short)18815;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 2385439763U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20293 : (unsigned short)7512;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)533 : (unsigned short)55053;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = -1449085946;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
