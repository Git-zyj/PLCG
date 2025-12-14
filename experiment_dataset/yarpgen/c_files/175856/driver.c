#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
short var_2 = (short)-24014;
unsigned long long int var_3 = 26598928192187571ULL;
unsigned int var_4 = 1963606164U;
signed char var_7 = (signed char)77;
long long int var_8 = 8180316614812363178LL;
unsigned short var_10 = (unsigned short)2748;
unsigned char var_12 = (unsigned char)109;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)183;
unsigned char var_15 = (unsigned char)117;
int zero = 0;
long long int var_16 = -7439020079879883519LL;
unsigned char var_17 = (unsigned char)252;
unsigned short var_18 = (unsigned short)43001;
unsigned char var_19 = (unsigned char)97;
unsigned long long int var_20 = 9952252355597846958ULL;
unsigned short var_21 = (unsigned short)55541;
unsigned char var_22 = (unsigned char)90;
unsigned long long int var_23 = 604338415779587560ULL;
unsigned long long int var_24 = 1486411650441996962ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)66;
unsigned char var_27 = (unsigned char)8;
unsigned int var_28 = 1812210111U;
short arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
unsigned char arr_4 [19] ;
_Bool arr_6 [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] [19] ;
signed char arr_11 [19] [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] [19] [19] ;
long long int arr_16 [19] [19] [19] [19] ;
unsigned long long int arr_17 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)23950;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)16258;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 13302958401795435687ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 17809044367783787387ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -3075756692541887618LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 5705426620919042038ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
