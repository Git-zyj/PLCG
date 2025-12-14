#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29829;
long long int var_1 = 2772002786116071963LL;
unsigned short var_4 = (unsigned short)8725;
_Bool var_5 = (_Bool)0;
int var_6 = 1624796323;
unsigned int var_7 = 592407221U;
unsigned long long int var_8 = 2816453732969170911ULL;
unsigned short var_9 = (unsigned short)53451;
unsigned char var_11 = (unsigned char)70;
unsigned char var_13 = (unsigned char)180;
unsigned short var_15 = (unsigned short)19386;
unsigned long long int var_16 = 16436525509586417887ULL;
int var_17 = -396375715;
unsigned long long int var_18 = 197552058942517219ULL;
int var_19 = -2044366219;
int zero = 0;
short var_20 = (short)27189;
unsigned long long int var_21 = 11398085262979354597ULL;
int var_22 = 1312719566;
unsigned short var_23 = (unsigned short)38895;
signed char var_24 = (signed char)41;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)4391;
long long int var_27 = -2603501785968674571LL;
unsigned short var_28 = (unsigned short)61227;
unsigned int var_29 = 2664160267U;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)8777;
unsigned short var_32 = (unsigned short)48459;
unsigned short var_33 = (unsigned short)10203;
unsigned short var_34 = (unsigned short)30292;
short var_35 = (short)17244;
unsigned int arr_16 [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] [23] [23] ;
int arr_24 [23] [23] ;
long long int arr_27 [22] [22] ;
unsigned long long int arr_36 [22] ;
short arr_37 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3033671377U : 4074873145U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 7333184082935432851LL : -8635124911017202915LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = -1105642928;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = -8545996538042458287LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 5480576336513063253ULL : 11362865018203219169ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (short)29090;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
