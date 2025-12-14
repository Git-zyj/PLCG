#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38028;
unsigned int var_4 = 709892443U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)9011;
unsigned short var_7 = (unsigned short)38960;
long long int var_8 = -554931506627025483LL;
short var_9 = (short)-11672;
unsigned int var_10 = 3056924293U;
unsigned short var_11 = (unsigned short)45621;
unsigned char var_12 = (unsigned char)87;
long long int var_14 = 2042913616444211982LL;
unsigned int var_15 = 2670453981U;
int zero = 0;
int var_16 = 1993400695;
int var_17 = -1670869735;
int var_18 = 1227750776;
short var_19 = (short)3738;
unsigned long long int var_20 = 16231497796910921186ULL;
long long int var_21 = 6581409111060936506LL;
short var_22 = (short)30222;
short var_23 = (short)-13817;
unsigned long long int var_24 = 10131544948352702576ULL;
int var_25 = -300848540;
unsigned char var_26 = (unsigned char)41;
unsigned short var_27 = (unsigned short)913;
unsigned char var_28 = (unsigned char)197;
unsigned long long int var_29 = 16900207460395194507ULL;
unsigned int var_30 = 863786989U;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 2147245364U;
signed char var_33 = (signed char)8;
long long int var_34 = 4033607095691982776LL;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 3473832690U;
unsigned long long int var_37 = 12778044879440038591ULL;
int var_38 = -1802479994;
unsigned short var_39 = (unsigned short)11968;
int var_40 = -1303577014;
_Bool var_41 = (_Bool)0;
long long int var_42 = -3148031426965280318LL;
long long int var_43 = 7512542393485883982LL;
long long int var_44 = -2942255983039922170LL;
int var_45 = 2009040616;
unsigned int var_46 = 140221129U;
short var_47 = (short)-11136;
unsigned int var_48 = 1222641758U;
long long int var_49 = -3806390680440754952LL;
_Bool arr_2 [20] ;
int arr_9 [21] ;
unsigned int arr_17 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 1846960770;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 1095181183U;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
