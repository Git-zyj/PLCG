#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
unsigned long long int var_2 = 14818804243406998969ULL;
unsigned int var_3 = 2966939672U;
short var_4 = (short)-12941;
unsigned long long int var_5 = 240007723688970196ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -1943273188;
unsigned short var_10 = (unsigned short)9997;
int var_11 = -1831737970;
unsigned char var_12 = (unsigned char)245;
unsigned short var_14 = (unsigned short)48934;
unsigned short var_15 = (unsigned short)39787;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)31;
int var_18 = 1060952509;
int zero = 0;
unsigned short var_19 = (unsigned short)54638;
short var_20 = (short)9069;
unsigned long long int var_21 = 309792849900080255ULL;
signed char var_22 = (signed char)76;
unsigned int var_23 = 549338676U;
int var_24 = -1560919049;
short var_25 = (short)21547;
int var_26 = -1370916568;
int var_27 = 752632494;
signed char var_28 = (signed char)94;
int var_29 = -2102341089;
_Bool var_30 = (_Bool)1;
long long int var_31 = 6549471923572215181LL;
unsigned int arr_2 [24] [24] ;
unsigned long long int arr_5 [24] ;
short arr_18 [24] [24] [24] [24] [24] ;
unsigned long long int arr_23 [24] [24] ;
unsigned short arr_29 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1058993698U : 3029091341U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 16497567278470503223ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)19685 : (short)14759;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 641497739451385278ULL : 9197676504743954722ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (unsigned short)37727;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
