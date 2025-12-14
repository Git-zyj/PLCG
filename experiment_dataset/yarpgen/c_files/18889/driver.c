#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_1 = -507607731;
unsigned char var_2 = (unsigned char)22;
_Bool var_3 = (_Bool)1;
short var_4 = (short)20637;
unsigned char var_5 = (unsigned char)116;
signed char var_6 = (signed char)118;
int var_7 = -433804163;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -114919056;
_Bool var_13 = (_Bool)0;
short var_14 = (short)21754;
unsigned long long int var_15 = 894665173446980475ULL;
unsigned long long int var_16 = 18078138765718725838ULL;
unsigned short var_17 = (unsigned short)48606;
int zero = 0;
unsigned short var_18 = (unsigned short)61821;
short var_19 = (short)6635;
short var_20 = (short)27833;
signed char var_21 = (signed char)14;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)174;
short var_25 = (short)-5229;
int var_26 = -796202068;
short var_27 = (short)15064;
unsigned char var_28 = (unsigned char)48;
unsigned long long int var_29 = 6749310107687179740ULL;
signed char var_30 = (signed char)-54;
short var_31 = (short)-4532;
short var_32 = (short)-3052;
unsigned long long int var_33 = 14632713704162905261ULL;
unsigned char var_34 = (unsigned char)194;
signed char var_35 = (signed char)-70;
unsigned short arr_11 [18] [18] [18] ;
_Bool arr_16 [16] ;
_Bool arr_21 [16] [16] ;
signed char arr_33 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)56491;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)-91;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
