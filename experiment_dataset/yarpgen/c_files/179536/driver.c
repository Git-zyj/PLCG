#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4434354182328788755ULL;
int var_1 = 850688409;
long long int var_2 = -2941143076690387603LL;
unsigned long long int var_3 = 15224071746758009302ULL;
unsigned char var_4 = (unsigned char)91;
_Bool var_5 = (_Bool)0;
long long int var_6 = -7600120177606279045LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5076322482760746852LL;
unsigned char var_9 = (unsigned char)42;
int var_10 = 35350520;
int var_11 = 443731806;
short var_12 = (short)10749;
int var_13 = -1340868429;
int zero = 0;
long long int var_14 = -3647466662328711812LL;
short var_15 = (short)31727;
unsigned char var_16 = (unsigned char)14;
int var_17 = 382884733;
short var_18 = (short)17608;
unsigned char var_19 = (unsigned char)235;
unsigned char var_20 = (unsigned char)126;
long long int var_21 = 8071098823632961239LL;
signed char var_22 = (signed char)0;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-12292;
long long int var_25 = -5896199763096635447LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = -6598480824716125561LL;
short var_28 = (short)-1226;
unsigned char var_29 = (unsigned char)160;
int var_30 = -1876521544;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)143;
unsigned short var_33 = (unsigned short)44968;
unsigned short var_34 = (unsigned short)38400;
short var_35 = (short)11300;
unsigned int arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_2 [10] [10] ;
int arr_4 [10] [10] ;
unsigned int arr_8 [10] [10] [10] ;
unsigned short arr_10 [10] [10] ;
unsigned long long int arr_11 [10] [10] [10] [10] ;
signed char arr_12 [10] [10] [10] [10] [10] ;
int arr_13 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_20 [22] ;
unsigned short arr_21 [22] ;
short arr_22 [22] ;
unsigned char arr_24 [22] ;
int arr_26 [22] [22] [22] ;
int arr_36 [10] [10] [10] [10] ;
unsigned char arr_3 [10] ;
unsigned int arr_14 [10] [10] [10] [10] [10] ;
int arr_15 [10] [10] ;
_Bool arr_16 [10] [10] [10] [10] [10] [10] ;
_Bool arr_19 [10] ;
unsigned char arr_40 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1562715940U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3807732733U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -4837486591010646611LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1767239546;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2976380791U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)24665;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 11050458475183221487ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1481698994;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 1795970785U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned short)54622;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (short)18307;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 1677216275;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = -810947317;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 1483617238U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = -1592308519;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = (unsigned char)143;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
