#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_12 = (short)-31407;
unsigned int var_13 = 2907297599U;
long long int var_14 = 7446808438514402911LL;
unsigned long long int var_15 = 4970623731018804093ULL;
long long int var_16 = -241085285498657682LL;
long long int var_17 = 1310929429483215214LL;
unsigned short var_18 = (unsigned short)38523;
long long int var_19 = 4104618567088262962LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)169;
unsigned long long int var_22 = 14235335591558852333ULL;
short var_23 = (short)-2798;
unsigned long long int var_24 = 8476552343706035249ULL;
short var_25 = (short)2775;
long long int var_26 = -4247896884133042060LL;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)164;
signed char var_29 = (signed char)-77;
unsigned char var_30 = (unsigned char)27;
long long int var_31 = -4733401935218796426LL;
unsigned char var_32 = (unsigned char)236;
_Bool var_33 = (_Bool)1;
unsigned short arr_3 [18] ;
signed char arr_22 [16] ;
_Bool arr_37 [11] ;
unsigned char arr_43 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11313 : (unsigned short)3736;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)7 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (unsigned char)44;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
