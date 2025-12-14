#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2108181882U;
_Bool var_1 = (_Bool)0;
int var_5 = -1751315656;
long long int var_6 = -3791441163377036346LL;
signed char var_7 = (signed char)98;
unsigned char var_8 = (unsigned char)67;
unsigned long long int var_9 = 4929031188160985746ULL;
short var_10 = (short)18198;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2597608376335608014ULL;
int var_13 = 1600657821;
unsigned char var_15 = (unsigned char)102;
int zero = 0;
unsigned char var_18 = (unsigned char)185;
int var_19 = 26056365;
unsigned long long int var_20 = 5571585586843709770ULL;
unsigned short var_21 = (unsigned short)62930;
int var_22 = -542747204;
signed char var_23 = (signed char)49;
short var_24 = (short)-5812;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)210;
unsigned int var_27 = 2012738956U;
unsigned short var_28 = (unsigned short)16566;
unsigned long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
short arr_2 [20] [20] ;
int arr_3 [20] ;
long long int arr_4 [13] [13] ;
int arr_6 [13] ;
unsigned short arr_10 [13] [13] [13] [13] ;
signed char arr_15 [13] ;
int arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2970957428785206927ULL : 12071293405221988195ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -3571363091921820108LL : 8714387598601135630LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25678 : (short)-17797;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 63134363 : 1395136324;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 7042879786721067631LL : 1528433616194691312LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1105572805;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21510;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 875093452 : -568520036;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
