#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8047422937458915933LL;
unsigned short var_1 = (unsigned short)9145;
unsigned long long int var_2 = 1778131686863489447ULL;
short var_3 = (short)2736;
long long int var_4 = -2773712561818198828LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)55991;
int var_8 = -1226218143;
unsigned short var_9 = (unsigned short)43433;
short var_10 = (short)23895;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)45391;
unsigned long long int var_15 = 12950736613350015634ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 18272522499137620262ULL;
unsigned int var_19 = 1839506571U;
unsigned char var_20 = (unsigned char)12;
unsigned char var_21 = (unsigned char)149;
unsigned int var_22 = 2474905193U;
short var_23 = (short)-21662;
long long int var_24 = -2974269547712616573LL;
unsigned char var_25 = (unsigned char)200;
unsigned char var_26 = (unsigned char)188;
unsigned long long int var_27 = 5683374664388724347ULL;
long long int var_28 = 7556704491674073020LL;
unsigned long long int var_29 = 10968527605606926715ULL;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 3151779551U;
int var_32 = 1124304498;
int var_33 = 791314873;
long long int arr_8 [11] ;
unsigned char arr_15 [11] [11] [11] [11] [11] ;
int arr_25 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -3158818144510203772LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)3 : (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 1983795857;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
