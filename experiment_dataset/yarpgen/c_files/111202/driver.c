#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -400800795;
signed char var_1 = (signed char)83;
_Bool var_2 = (_Bool)1;
short var_6 = (short)-3246;
unsigned long long int var_7 = 15161190284855219792ULL;
signed char var_10 = (signed char)-33;
int zero = 0;
unsigned short var_11 = (unsigned short)59908;
unsigned short var_12 = (unsigned short)15330;
unsigned long long int var_13 = 3952191550174326751ULL;
short var_14 = (short)-16345;
short var_15 = (short)22910;
unsigned int var_16 = 2712016985U;
unsigned short var_17 = (unsigned short)17976;
unsigned char var_18 = (unsigned char)172;
short var_19 = (short)-17074;
unsigned char var_20 = (unsigned char)236;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10985142720128450138ULL;
unsigned int var_23 = 3089654420U;
long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned short arr_2 [15] ;
long long int arr_3 [15] [15] ;
long long int arr_6 [15] [15] [15] ;
short arr_4 [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1105045240773591445LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2924789494075573275ULL : 15244132683419595546ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)44526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 7348397550856626043LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3952940039083307182LL : -7520208796268324837LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-19701;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1233320928;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
