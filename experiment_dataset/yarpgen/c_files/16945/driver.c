#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned int var_2 = 2300676277U;
unsigned char var_3 = (unsigned char)125;
_Bool var_4 = (_Bool)1;
short var_5 = (short)7436;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5861290122889082532LL;
unsigned int var_8 = 3350934593U;
unsigned int var_12 = 2021652270U;
short var_14 = (short)22848;
unsigned int var_16 = 2041269652U;
signed char var_17 = (signed char)32;
signed char var_18 = (signed char)-117;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
unsigned int var_20 = 139827844U;
short var_21 = (short)-483;
unsigned int var_22 = 3739207518U;
unsigned int var_23 = 1055732308U;
signed char var_24 = (signed char)-24;
short var_25 = (short)-12634;
unsigned char var_26 = (unsigned char)126;
short var_27 = (short)29917;
int var_28 = -782935673;
long long int var_29 = 5685590888068584191LL;
unsigned int var_30 = 3139499407U;
short var_31 = (short)28979;
int var_32 = -870289829;
short var_33 = (short)30607;
_Bool arr_8 [21] [21] [21] [21] ;
unsigned char arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned char)66;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
