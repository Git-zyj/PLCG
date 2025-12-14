#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-93;
long long int var_6 = -4303011997733079969LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-21;
long long int var_9 = 279346129785366613LL;
int zero = 0;
int var_10 = -135570264;
int var_11 = -1462049985;
int var_12 = -1931228913;
_Bool var_13 = (_Bool)0;
short var_14 = (short)13565;
long long int var_15 = -6313280623376358663LL;
unsigned short var_16 = (unsigned short)3241;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5438256122389181570LL;
int var_19 = 684548461;
int var_20 = 1792922253;
unsigned char var_21 = (unsigned char)215;
unsigned long long int var_22 = 18081464063244994175ULL;
unsigned char var_23 = (unsigned char)6;
int var_24 = -1745060294;
unsigned long long int var_25 = 15375121700470185343ULL;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 18311153266918969504ULL;
unsigned int var_28 = 3077266950U;
long long int var_29 = 2634509486080682973LL;
unsigned short var_30 = (unsigned short)55528;
int var_31 = 1668838092;
signed char var_32 = (signed char)24;
unsigned long long int var_33 = 13609391054743394978ULL;
unsigned short var_34 = (unsigned short)8432;
unsigned char arr_0 [14] [14] ;
long long int arr_1 [14] ;
short arr_3 [10] [10] ;
short arr_5 [10] [10] ;
unsigned char arr_6 [10] ;
_Bool arr_9 [10] [10] [10] [10] ;
unsigned int arr_21 [17] ;
int arr_23 [17] [17] ;
int arr_25 [17] [17] [17] ;
_Bool arr_26 [17] ;
unsigned long long int arr_27 [17] [17] ;
short arr_29 [17] [17] [17] ;
long long int arr_32 [17] [17] [17] [17] [17] ;
long long int arr_33 [17] [17] [17] [17] [17] ;
_Bool arr_34 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)195 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6303435457318985718LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)21339 : (short)25756;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15621;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 1326938083U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = 327384256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 798112438;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = 12889308405834014558ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)27094;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = -6312416252185401773LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 2794988202751619645LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
